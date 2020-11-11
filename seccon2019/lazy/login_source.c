#define PASSWORD "XXXXXXXXXX"
#define USERNAME "XXXXXXXX"

int login(void){
    char username[BUFFER_LENGTH];
    char password[BUFFER_LENGTH];
    char input_username[BUFFER_LENGTH];
    char input_password[BUFFER_LENGTH];

    memset(username,0x0,BUFFER_LENGTH);
    memset(password,0x0,BUFFER_LENGTH);
    memset(input_username,0x0,BUFFER_LENGTH);
    memset(input_password,0x0,BUFFER_LENGTH);

    strcpy(username,USERNAME);
    strcpy(password,PASSWORD);

    printf("username : ");
    input(input_username);
    printf("Welcome, %s\n",input_username);

    printf("password : ");
    input(input_password);


    if(strncmp(username,input_username,strlen(USERNAME)) != 0){
        puts("Invalid username");
        return 0;
    }

    if(strncmp(password,input_password,strlen(PASSWORD)) != 0){
        puts("Invalid password");
        return 0;
    }

    return 1;
}


void input(char *buf){
        int recv;
        int i = 0;
        while(1){
                recv = (int)read(STDIN_FILENO,&buf[i],1);
                if(recv == -1){
                        puts("ERROR!");
                        exit(-1);
                }
                if(buf[i] == '\n'){
                        return;
                }
                i++;
        }
}

