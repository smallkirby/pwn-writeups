#define BOOK_DESCRIPTION_SIZE 0x300

struct Book {
	char book_description[BOOK_DESCRIPTION_SIZE];
	unsigned long index;
	struct Book* next;
	struct Book* prev;
} ;

struct Request {
	unsigned long index;
	char* userland_pointer;
} ;

struct Book b;
struct Request r;

