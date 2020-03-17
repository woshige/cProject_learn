#include <stdio.h>

/**
 * 在第一个枚举值给定数值的情况下，后面的数值在之前的数值的基础上加上1
 * 在第一个元素没有给定的情况之下，默认的值为1
 */
enum {
    MON = 1, TUS, WES, THU = 4, FRI, SAT, SUN
} day;
void print_enum();
void print_NULL();
int main() {
    print_enum();
    int var1;
    char var2[10];
    printf("var1变量的地址为：%p\n",&var1);
    printf("var2变量的地址为：%p\n",&var2);
    int var = 20;
    int *ip;
    ip = &var;
    printf("var变量的地址值为：%p\n",&var);
    /*在指针变量中存储的地址*/
    printf("在ip中的值为%p\n",ip);
    /*使用指针访问值*/
    printf("*ip指针访问值：%d\n",*ip);
    printf("&ip的值为%p\n",&ip);
    print_NULL();
    return 0;
}
void print_enum(){
    for(day = MON;day <= SUN;day++){
        printf("枚举元素：%d\n",day);
    }
}
void print_NULL(){
    int *ptr = NULL;
    printf("ptr 的地址 %p\n",ptr);
}
