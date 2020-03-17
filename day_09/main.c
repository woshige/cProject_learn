#include <stdio.h>
#include <string.h>

/**
 * 在64位系统上有个4字对齐
 */
typedef struct Books {
    char title[50];
    char author[50];
    char subject[50];
    unsigned int book_id;
    char s;
    int c;
} Book;

int main() {
    Book book;
    strcpy(book.title, "c program");
    strcpy(book.author, "c");
    strcpy(book.subject, "how to program");
    book.book_id = 1;
    printf("title:%s\n", book.title);
    printf("author:%s\n", book.author);
    printf("subject:%s\n", book.subject);
    printf("book_id:%d\n", book.book_id);
    char chars[100];
    printf("please enter a value:");
    gets(chars);
    printf("你输入的值为：\n");
    puts(chars);
}