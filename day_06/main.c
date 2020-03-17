#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int *getRandom();

int max(int x, int y);

void populate_array(int *array,size_t arraySize,int (*getNextValue)(void));
int getNextValue(void);
int main() {
    int *p;
    int i;
    p = getRandom();
    for (i = 0; i < 10; i++) {
        printf("*(p + [%d]) : %d\n", i, *(p + i));
    }
    /* 函数指针 */
    int (* f)(int, int) = &max;
    int a,b,c,d;
    printf("请输入三个数字：");
    scanf("%d,%d,%d",&a,&b,&c);
    /* 与直接调用函数等价，d = max(max(a,b),c) */
    d = f(f(a,b),c);
    printf("最大的数字为：%d\n",d);
    int arr[10];
    populate_array(arr,10,getNextValue);
    for(i = 0; i < 10;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}

int *getRandom() {
    static int r[10];
    int i;
    /* 设置种子 */
    srand((unsigned long) time((NULL)));
    for (i = 0; i < 10; i++) {
        r[i] = rand();
        printf("%d\n", r[i]);
    }
    return r;
}

int max(int x, int y) {
    return x > y ? x : y;
}

void populate_array(int *array,size_t arraySize,int (*getNextValue)(void)){
   for(size_t i = 0; i < arraySize; i++){
       array[i] = getNextValue();
   }
}

int getNextValue(void){
    return rand();
}

