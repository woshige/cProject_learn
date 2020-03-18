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
        fprintf(stderr, "����ţ�%d\n", errno);
        perror("ͨ��perror�������");
        fprintf(stderr, "���ļ�����%s\n", strerror(errnum));
    } else {
        fclose(fp);
    }
}

void zero_errno(){
    int dividend = 20;
    int divisor = 0;
    int quotient;
    if(divisor == 0){
        fprintf(stderr,"����Ϊ 0 �˳�����...\n");
        exit(EXIT_FAILURE);
    }
    quotient = dividend / divisor;
    fprintf(stderr,"quotient������ֵΪ��%d\n",quotient);
    exit(EXIT_SUCCESS);
}