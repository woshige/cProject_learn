#include <stdio.h>
#include <float.h>
#include "variable/test_constant.h"


void send_message() {
    printf("send message");
}

void receive_message(void) {
    printf("recive message");
}

int x;
int y;
int variable() {
    // 函数内声明变量x和y为外部变量
    extern int x;
    extern int y;
    //给外部变量赋值
    x = 1;
    y = 1;
    return x + y;
}
int a = 1;
int b  = 2;
int addtwonum();
int add_area();
int main() {
    printf("long 存储类型大小：%lu \n", (unsigned long) sizeof(long));
    printf("int 存储大小：%lu \n", (unsigned long) sizeof(int));
    printf("float 存储字节的最大数为：%lu \n", (unsigned long) sizeof(float));
    printf("float 最小值：%E\n", FLT_MIN);
    printf("float 最大值：%E\n", FLT_MAX);
    printf("精度是：%d\n", FLT_DIG);
    printf("double 最小值：%E\n", DBL_MAX);
    printf("double 最大值：%E\n", DBL_MIN);
    printf("double 精度是：%d\n", DBL_DIG);
    printf("long double 最大值为：%E\n", (double) (unsigned long) LDBL_MAX);
    printf("long double 最小值为：%E\n", (double) (unsigned long) LDBL_MIN);
    printf("long double 精度为：%d\n", LDBL_DIG);
    send_message();
    receive_message();
    printf("variable函数的返回值为：%d\n", variable());
    printf("外部变量的值为：%d",x);
    printf("addtwonum的结果为：%d\n",addtwonum());
    add_area();
}

