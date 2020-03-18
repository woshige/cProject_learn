#include <stdio.h>
#include <stdarg.h>
#ifdef X64
#define t long long
#else
#define t int
#endif
double average(int num, ...);

void debug_arg(unsigned int num, ...);

int main() {
    printf("Hello, World!\n");
    printf("average of 2,3,4,5 = %f\n", average(4, 2, 3, 4, 5));
    printf("average of 5,10,15 = %f\n", average(3, 5, 10, 15));
    debug_arg(3, 66, 88, 666);
    return 0;
}

double average(int num, ...) {
    va_list vaList;
    double sum = 0.0;
    int i;
    /*为num个参数初始化 valist*/
    va_start(vaList, num);
    /*访问所有赋给valist的参数 */
    for (i = 0; i < num; i++) {
        sum += va_arg(vaList, int);
    }
    va_end(vaList);
    return sum / num;
}

void debug_arg(unsigned int num, ...) {
    va_list vaList;
    int i,res = 0;
    va_start(vaList,num);
    for(i = 0; i < num;i++){
        res = va_arg(vaList, int);
        printf("res:%d,*vaList:%d\n",res,*vaList);
    }
    va_end(vaList);
}