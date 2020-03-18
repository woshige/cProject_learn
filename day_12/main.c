#include <stdio.h>

void double_int();

void char_int();

void print_size();

int main() {
    double_int();
    char_int();
    print_size();
    return 0;
}

void double_int() {
    int sum = 17, count = 5;
    double res;
    res = (double) sum / count;
    printf("%f\n", res);
}

void char_int() {
    int i = 17;
    char c = 'c'; /* ascii的值为 99*/
    int sum;
    sum = i + c;
    printf("%d\n", sum);
}

void print_size() {
    /*%zu 输出的是size_t型*/
    printf("int:%d\n", (unsigned int) sizeof(int));
    printf("unsigned:%d\n", (unsigned int) sizeof(unsigned int));
    printf("long:%d\n", (int) sizeof(long));
    printf("unsigned long :%d\n", (int) sizeof(unsigned long));
    printf("long long:%d\n", (int) sizeof(long long));
    printf("unsigned long long:%d\n", (int) sizeof(unsigned long long));
    printf("float:%d\n", (int) sizeof(float));
    printf("double:%d\n", (int) sizeof(double));
    printf("long double:%d\n", (int) sizeof(long double));
}