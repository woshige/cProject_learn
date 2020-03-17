#include <stdio.h>

#define TIME 1000000000
int m, n = TIME; /*全局变量*/

void func1(void);
int max(int num1,int num2);
void swap(int num1,int num2);
void true_swap(int *num1,int *num2);
static int count = 10; /*全局变量 - static是默认的*/
int paramter = 1;

extern void write_extern(void);

int main() {
    int a = 1;
    int b = 2;
    swap(a,b);
    printf("第一次交换：a = %d\t b = %d\n",a,b);
    true_swap(&a,&b);
    printf("a的地址值：%p\t，b的地址值为：%p\n",&a,&b);
    printf("第二次交换：a = %d\t b = %d\n",a,b);
    return 0;
}

void func1() {
    /**
     * static表示是func1中的局部变量，但是只会初始化一次，每次调用此函数
     * 这个tingy的值是不会发生改变的
     */
    static int thingy = 5;
    thingy++;
    printf("thingy的值为 %d，count 为 %d\n", thingy, count);
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