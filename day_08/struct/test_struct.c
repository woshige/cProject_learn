//
// Created by Administrator on 2020/3/16 0016.
//

#include <stdio.h>
#include "test_struct.h"

void print_book(struct test_Books books) {
    printf("print_book begin....");
    printf("%s\n", books.title);
    printf("%s\n", books.author);
    printf("%s\n", books.subject);
    printf("%d\n", books.book_id);
    printf("print_book end....");
}
void print_book2(struct test_Books *books){
    printf("title:%s\n",books->title);
    printf("author:%s\n",books->author);
    printf("subject:%s\n",books->subject);
    printf("book_id:%d\n",books->book_id);
}
