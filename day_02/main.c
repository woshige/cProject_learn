#include <stdio.h>

#define TIME 1000000000
int m, n = TIME; /*ȫ�ֱ���*/

void func1(void);
int max(int num1,int num2);
void swap(int num1,int num2);
void true_swap(int *num1,int *num2);
static int count = 10; /*ȫ�ֱ��� - static��Ĭ�ϵ�*/
int paramter = 1;

extern void write_extern(void);

int main() {
    int a = 1;
    int b = 2;
    swap(a,b);
    printf("��һ�ν�����a = %d\t b = %d\n",a,b);
    true_swap(&a,&b);
    printf("a�ĵ�ֵַ��%p\t��b�ĵ�ֵַΪ��%p\n",&a,&b);
    printf("�ڶ��ν�����a = %d\t b = %d\n",a,b);
    return 0;
}

void func1() {
    /**
     * static��ʾ��func1�еľֲ�����������ֻ���ʼ��һ�Σ�ÿ�ε��ô˺���
     * ���tingy��ֵ�ǲ��ᷢ���ı��
     */
    static int thingy = 5;
    thingy++;
    printf("thingy��ֵΪ %d��count Ϊ %d\n", thingy, count);
}

int max(int num1,int num2){
    return num1 > num2 ? num1 : num2;
}
void swap(int num1,int num2){
    int temp;
    temp = num2;
    num2 = num1;
    num1 = temp;
}
void true_swap(int *num1,int *num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}