#include <stdio.h>

double factorial(unsigned int i);

int fibonaci(int i);

int main() {
    printf("15的阶乘为：%f\n", factorial(15));
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\t\n", fibonaci(i));
    }
    return 0;
}

double factorial(unsigned int i) {
    if (i <= 1) {
        return 1;
    }
    return i * factorial(i - 1);
}

int fibonaci(int i) {
    if (i == 0) {
        return 0;
    }
    if (i == 1) {
        return 1;
    }
    return fibonaci(i - 1) + fibonaci(i - 2);
}