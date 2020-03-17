#include <stdio.h>
#include "function/function.h"
#include <time.h>

#define MAX 3

void add_pointer();

void reduce_pointer();

void compare_pointer();

void pointer_arr();

void ppointer();
int main() {
    add_pointer();
    reduce_pointer();
    compare_pointer();
    pointer_arr();
    ppointer();
    unsigned long sec;
    get_seconds(&sec);
    printf("Number of seconds：%ld\n",sec);
    int balance[5] = {1000,2,3,17,50};
    double avg;
    avg = getAverage(balance,5);
    printf("average value is：%f\n",avg);
    return 0;
}

void add_pointer() {
    int var[] = {10, 100, 200};
    int i, *ptr, *arr;
    /* 指针中的数组地址 */
    ptr = var;
    arr = (int *) &var;
    printf("ptr的值为%p\n", ptr);
    printf("arr的值为%p\n", arr);
    for (i = 0; i < MAX; i++) {
        printf("存储地址：var[%d] = %x\n", i, (unsigned int) ptr);
        printf("存储值：var[%d] = %d\n", i, *ptr);
        ptr++;
    }
}

void reduce_pointer() {
    int var[] = {10, 20, 100};
    int i, *ptr;
    /* 指针的最后一个元素的地址 */
    ptr = &var[MAX - 1];
    for (i = MAX; i > 0; i--) {
        printf("var[%d]的地址值为：%x\n", i, (unsigned int) ptr);
        printf("var[%d]的对应的值为：%d\n", i, *ptr);
        ptr--;
    }
}
void compare_pointer(){
    int var[] = {10,20,100};
    int i,*ptr;
    ptr = var;
    i = 0;
    while(ptr <= &var[MAX - 1]){
        printf("--compare--var[%d]对应的地址值为：%x\n",i,(unsigned int)ptr);
        printf("--compare--var[%d]对应的值为：%d\n",i,*ptr);
        ptr++;
        i++;
    }
}
void pointer_arr(){
    int var[] = {10,20,100};
    int i,*ptr[MAX];
    for(i = 0; i < MAX; i++){
        ptr[i] = &var[i];
    }
    for(i = 0;i < MAX; i++){
        printf("--pointer_arr--var[%d]对应的值为：%d\n",i,*ptr[i]);
    }
}

void ppointer(){
    int var;
    int *ptr;
    int **pptr;
    var = 3000;
    ptr = &var;
    pptr = &ptr;
    printf("var的值为：%d\n",var);
    printf("*ptr的值为：%d\n",*ptr);
    printf("**pptr的值为：%d\n",**pptr);
}