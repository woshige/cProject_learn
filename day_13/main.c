#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

void test_errno();
void zero_errno();

int main() {
  test_errno();
  zero_errno();
}

void test_errno() {
    FILE *fp;
    int errnum;
    fp = fopen("unexits.txt", "rb");
    if (fp == NULL) {
        errnum = errno;
        fprintf(stderr, "错误号：%d\n", errno);
        perror("通过perror输出错误");
        fprintf(stderr, "打开文件错误：%s\n", strerror(errnum));
    } else {
        fclose(fp);
    }
}

void zero_errno(){
    int dividend = 20;
    int divisor = 0;
    int quotient;
    if(divisor == 0){
        fprintf(stderr,"除数为 0 退出运行...\n");
        exit(EXIT_FAILURE);
    }
    quotient = dividend / divisor;
    fprintf(stderr,"quotient变量的值为：%d\n",quotient);
    exit(EXIT_SUCCESS);
}