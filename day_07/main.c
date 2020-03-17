#include <stdio.h>
#include <string.h>

int main() {
    char greeting[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    printf("Greeting message: %s\n", greeting);
    char str1[12] = "hello";
    char str2[12] = "world";
    char str3[12];
    int len;
    /* 复制str1到str3 */
    strcpy(str3,str1);
    printf("str3的值为：%s\n",str3);
    /* 连接str1和str2 */
    strcat(str1,str2);
    printf("连接之后str2的值为：%s\n",str1);
    /* 连接后，str1的长度 返回的值为该字符串的长度，遇到\0就停止，但是不会将\0计算在内 */
    len = (int) strlen(str1);
    printf("str1的长度为：%d\n",len);
    /*size返回的是指针所占用的地址空间的大小*/
    len = (int) sizeof(str1);
    printf("str1的长度为：%d\n",len);
    return 0;
}
