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
    /* ����ָ�� */
    int (* f)(int, int) = &max;
    int a,b,c,d;
    printf("�������������֣�");
    scanf("%d,%d,%d",&a,&b,&c);
    /* ��ֱ�ӵ��ú����ȼۣ�d = max(max(a,b),c) */
    d = f(f(a,b),c);
    printf("��������Ϊ��%d\n",d);
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
    /* �������� */
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

