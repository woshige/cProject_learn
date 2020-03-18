#include <stdio.h>
#include "fp/test_fp.h"

int main() {
    FILE *fp = NULL;
    const char *mode;
    mode = "w+";
    fp = fopen("C:\\tmp\\temp.txt", mode);
    printf("fp:%p\n", fp);
    int res_fprintf, res_fputs;
    res_fprintf = fprintf(fp, "fprintf for test for fp\n");
    printf("res_fprintf:%d\n", res_fprintf);
    res_fputs = fputs("fputs for test for fp\n", fp);
    printf("res_fputs:%d\n", res_fputs);
    fclose(fp);
    mode = "r+";
    fp = fopen("C:\\tmp\\temp.txt", mode);
    char c = (char)fgetc(fp);
    printf("读取到的字符为：%c\n",c);
    fclose(fp);
    printf("-------------\n");
    print_fp();
    printf("-------------\n");
    test_seek();
    replace_char();
}
