//
// Created by Administrator on 2020/3/17 0017.
//
#include <stdio.h>

void print_fp() {
    char *res;
    FILE *fp = NULL;
    char buf[255];
    const char *mode = "r";
    fp = fopen("C:\\tmp\\temp.txt", mode);
    /*读取到空格就会停止*/
    fscanf(fp, "%s", buf);
    printf("1: %s\n", buf);
    /*读取到对应的n-1，并将null设置为n位置，或者读取到空格*/
    res = fgets(buf, 255, fp);
    printf("res %s 2:%s\n", res, buf);
    res = fgets(buf, 255, fp);
    printf("res: %s 3:%s\n", res, buf);
    fclose(fp);
}

void test_seek() {
    FILE *fp = NULL;
    char m = 'r';
    const char *mode = &m;
    fp = fopen("C:\\tmp\\temp.txt", mode);
    /*从开头的第一个字母移动到第二个字母*/
    fseek(fp, 1, SEEK_SET);
    char res = (char) fgetc(fp);
    printf("%c\n", res);
    fclose(fp);
}

void replace_char() {
    FILE *fp = NULL;
    const char *mode = "w+";
    fp = fopen("C:\\tmp\\temp.txt",mode);
    char buff[255];
    fseek(fp,10,SEEK_SET);
    if ((char *)putc(65,fp) == "EOF"){
          printf("put char error\n");
    }
    fseek(fp,-10,SEEK_SET);
    fgets(buff,500,fp);
    printf("read from the file: %s\n",buff);
    fclose(fp);
}