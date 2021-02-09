/*
 * This is a demo program to show how to interact with SPARK.
 * Don't waste time on finding bugs here ;)
 *
 * Copyright (c) 2020 david942j
 */

#include <assert.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <unistd.h>

/** Added or Removed by me **/
//#include <linux/spark.h>
#define SPARK_LINK 0x4008d900
#define SPARK_QUERY 0xc010d903
#define SPARK_FINALIZE 0xd902
#define SPARK_GET_INFO 0x8018d901
struct spark_ioctl_query{
	int fd1;
	int fd2;
	long distance;
};
struct spark_info{
	long num_edge;
	long unk1;
	long unk2;
};
struct spark_ioctl_get{
	int fd1;
	int fd2;
	struct spark_info *info;
};
/** End of Added or Removed by me **/

#define DEV_PATH "/dev/node"

#define N 6
static int fd[N];
const char l[] = "ABCDEF";

/*
    B -- 10 -- D -- 11 -- F
   / \         |
  4   |        |
 /    |        |
A     5        4
 \    |        |
  2   |        |
    \ |        |
      C -- 3 - E
 */
static void spark_link(int a, int b, unsigned int weight) {
  printf("Creating link between '%c' and '%c' with weight %u\n", l[a], l[b], weight);
  assert(ioctl(fd[a], SPARK_LINK, fd[b] | ((unsigned long long) weight << 32)) == 0);
}

static void query(int a, int b) {
  struct spark_ioctl_query qry = {
    .fd1 = fd[a],
    .fd2 = fd[b],
  };
  assert(ioctl(fd[0], SPARK_QUERY, &qry) == 0);
  printf("The length of shortest path between '%c' and '%c' is %lld\n", l[a], l[b], qry.distance);
}

int main(int argc, char *argv[]) {
  for (int i = 0; i < N; i++) {
    fd[i] = open(DEV_PATH, O_RDONLY);
    assert(fd[i] >= 0);
  }
  spark_link(0, 1, 4);
  spark_link(0, 2, 2);
  spark_link(1, 2, 5);
  spark_link(1, 3, 10);
  spark_link(2, 4, 3);
  spark_link(3, 4, 4);
  spark_link(3, 5, 11);
  assert(ioctl(fd[0], SPARK_FINALIZE) == 0);
  query(0, 5);
  query(3, 2);
  query(2, 5);
  query(0, 5);
  query(3, 2);
  query(2, 5);

  /** added by me ***/
  for(int ix=0; ix!=N; ++ix){
	struct spark_info info;
	struct spark_ioctl_get getter = {
		.fd1 = fd[ix],
		.fd2 = 0,
		.info = &info
	};
	if(ioctl(fd[0], SPARK_GET_INFO, &getter) != 0){
		printf("FAIL");
	}
	printf("[%d] %llx, %llx, %llx\n", ix, info.num_edge, info.unk1, info.unk2);
  }
  /** END added by me ***/

  for (int i = 0; i < N; i++)
    close(fd[i]);
  return 0;
}
