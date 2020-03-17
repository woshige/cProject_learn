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
    printf("Number of seconds��%ld\n",sec);
    int balance[5] = {1000,2,3,17,50};
    double avg;
    avg = getAverage(balance,5);
    printf("average value is��%f\n",avg);
    return 0;
}

void add_pointer() {
    int var[] = {10, 100, 200};
    int i, *ptr, *arr;
    /* ָ���е������ַ */
    ptr = var;
    arr = (int *) &var;
    printf("ptr��ֵΪ%p\n", ptr);
    printf("arr��ֵΪ%p\n", arr);
    for (i = 0; i < MAX; i++) {
        printf("�洢��ַ��var[%d] = %x\n", i, (unsigned int) ptr);
        printf("�洢ֵ��var[%d] = %d\n", i, *ptr);
        ptr++;
    }
}

void reduce_pointer() {
    int var[] = {10, 20, 100};
    int i, *ptr;
    /* ָ������һ��Ԫ�صĵ�ַ */
    ptr = &var[MAX - 1];
    for (i = MAX; i > 0; i--) {
        printf("var[%d]�ĵ�ֵַΪ��%x\n", i, (unsigned int) ptr);
        printf("var[%d]�Ķ�Ӧ��ֵΪ��%d\n", i, *ptr);
        ptr--;
    }
}
void compare_pointer(){
    int var[] = {10,20,100};
    int i,*ptr;
    ptr = var;
    i = 0;
    while(ptr <= &var[MAX - 1]){
        printf("--compare--var[%d]��Ӧ�ĵ�ֵַΪ��%x\n",i,(unsigned int)ptr);
        printf("--compare--var[%d]��Ӧ��ֵΪ��%d\n",i,*ptr);
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
        printf("--pointer_arr--var[%d]��Ӧ��ֵΪ��%d\n",i,*ptr[i]);
    }
}

void ppointer(){
    int var;
    int *ptr;
    int **pptr;
    var = 3000;
    ptr = &var;
    pptr = &ptr;
    printf("var��ֵΪ��%d\n",var);
    printf("*ptr��ֵΪ��%d\n",*ptr);
    printf("**pptr��ֵΪ��%d\n",**pptr);
}