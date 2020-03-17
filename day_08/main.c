#include <stdio.h>
#include <string.h>
#include "struct/test_struct.h"

struct Books {
    char title[20];
    char author[20];
    char subject[100];
    int book_id;
} books = {"C语言", "RUNOOB", "编程语言", 123456};

struct test_Books test_book;

int main() {
    printf("书名：%s\n 作者：%s\n 摘要：%s\n 编号：%d\n", books.title, books.author, books.subject, books.book_id);
    struct Books books1;
    struct Books books2;
    strcpy(books1.title, "C PROGRAM");
    strcpy(books1.author, "RUNOOB");
    strcpy(books1.subject, "c语言编程");
    books1.book_id = 11111;
    printf("%s\n", books1.title);
    printf("%s\n", books1.author);
    printf("%s\n", books1.subject);
    printf("%d\n", books1.book_id);
    strcpy(test_book.title, "java");
    strcpy(test_book.subject, "about java");
    strcpy(test_book.author, "java");
    test_book.book_id = 10;
    print_book(test_book);
    printf("print_book2 begin-----");
    print_book2(&test_book);
    printf("print_book2 end--------");

}