#include <stdio.h>
#include <string.h>

int main() {
    char greeting[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    printf("Greeting message: %s\n", greeting);
    char str1[12] = "hello";
    char str2[12] = "world";
    char str3[12];
    int len;
    /* ����str1��str3 */
    strcpy(str3,str1);
    printf("str3��ֵΪ��%s\n",str3);
    /* ����str1��str2 */
    strcat(str1,str2);
    printf("����֮��str2��ֵΪ��%s\n",str1);
    /* ���Ӻ�str1�ĳ��� ���ص�ֵΪ���ַ����ĳ��ȣ�����\0��ֹͣ�����ǲ��Ὣ\0�������� */
    len = (int) strlen(str1);
    printf("str1�ĳ���Ϊ��%d\n",len);
    /*size���ص���ָ����ռ�õĵ�ַ�ռ�Ĵ�С*/
    len = (int) sizeof(str1);
    printf("str1�ĳ���Ϊ��%d\n",len);
    return 0;
}
