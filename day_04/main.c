#include <stdio.h>

/**
 * �ڵ�һ��ö��ֵ������ֵ������£��������ֵ��֮ǰ����ֵ�Ļ����ϼ���1
 * �ڵ�һ��Ԫ��û�и��������֮�£�Ĭ�ϵ�ֵΪ1
 */
enum {
    MON = 1, TUS, WES, THU = 4, FRI, SAT, SUN
} day;
void print_enum();
void print_NULL();
int main() {
    print_enum();
    int var1;
    char var2[10];
    printf("var1�����ĵ�ַΪ��%p\n",&var1);
    printf("var2�����ĵ�ַΪ��%p\n",&var2);
    int var = 20;
    int *ip;
    ip = &var;
    printf("var�����ĵ�ֵַΪ��%p\n",&var);
    /*��ָ������д洢�ĵ�ַ*/
    printf("��ip�е�ֵΪ%p\n",ip);
    /*ʹ��ָ�����ֵ*/
    printf("*ipָ�����ֵ��%d\n",*ip);
    printf("&ip��ֵΪ%p\n",&ip);
    print_NULL();
    return 0;
}
void print_enum(){
    for(day = MON;day <= SUN;day++){
        printf("ö��Ԫ�أ�%d\n",day);
    }
}
void print_NULL(){
    int *ptr = NULL;
    printf("ptr �ĵ�ַ %p\n",ptr);
}
