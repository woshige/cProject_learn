#include <stdio.h>
#include <float.h>
#include "variable/test_constant.h"


void send_message() {
    printf("send message");
}

void receive_message(void) {
    printf("recive message");
}

int x;
int y;
int variable() {
    // ��������������x��yΪ�ⲿ����
    extern int x;
    extern int y;
    //���ⲿ������ֵ
    x = 1;
    y = 1;
    return x + y;
}
int a = 1;
int b  = 2;
int addtwonum();
int add_area();
int main() {
    printf("long �洢���ʹ�С��%lu \n", (unsigned long) sizeof(long));
    printf("int �洢��С��%lu \n", (unsigned long) sizeof(int));
    printf("float �洢�ֽڵ������Ϊ��%lu \n", (unsigned long) sizeof(float));
    printf("float ��Сֵ��%E\n", FLT_MIN);
    printf("float ���ֵ��%E\n", FLT_MAX);
    printf("�����ǣ�%d\n", FLT_DIG);
    printf("double ��Сֵ��%E\n", DBL_MAX);
    printf("double ���ֵ��%E\n", DBL_MIN);
    printf("double �����ǣ�%d\n", DBL_DIG);
    printf("long double ���ֵΪ��%E\n", (double) (unsigned long) LDBL_MAX);
    printf("long double ��СֵΪ��%E\n", (double) (unsigned long) LDBL_MIN);
    printf("long double ����Ϊ��%d\n", LDBL_DIG);
    send_message();
    receive_message();
    printf("variable�����ķ���ֵΪ��%d\n", variable());
    printf("�ⲿ������ֵΪ��%d",x);
    printf("addtwonum�Ľ��Ϊ��%d\n",addtwonum());
    add_area();
}

