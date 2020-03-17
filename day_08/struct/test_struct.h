//
// Created by Administrator on 2020/3/16 0016.
//
struct test_Books {
    char title[20];
    char author[20];
    char subject[100];
    int book_id;
} test_books;
struct packed_struct{
    unsigned int f1 : 1;
    unsigned int f2 : 1;
    unsigned int f3 : 1;
    unsigned int f4 : 1;
    unsigned int type : 4;
    unsigned int my_int : 9;
};
struct bs{
    int a : 4;
    int   : 4;
    int c : 4;
    int d : 4;
};
void print_book(struct test_Books books);
void print_book2(struct test_Books *books);