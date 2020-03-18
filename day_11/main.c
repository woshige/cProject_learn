/*从系统库中导入stdio.h文件*/
#include <stdio.h>

/*从本地中导入自定义的myheader.h*/
#include "header/myheader.h"

/*将下面的MAX_ARRAY_LENGTH 替换为20*/
#define MAX_ARRAY_LENGTH 10
/*取消之前的定义*/
#undef MAX_ARRAY_LENGTH
#define MAX_ARRAY_LENGTH 20
/*如果MESSAGE没有定义的时候*/
#ifndef MESSAGE
#define MESSAGE "message is not define"
#endif
#define message_for(a,b) \
 printf(#a "and" #b ":we love you !\n")
#define message_for2(n) printf("token" #n "=%d",token##n)
#if !defined (slc)
    #define slc "slc"
#endif
int main() {
    printf("%d\n", MAX_ARRAY_LENGTH);
    printf("%s\n", MESSAGE);
    printf("%s\n",__DATE__);
    printf("%s\n",__TIME__);
    printf("%s\n",__FILE__);
    printf("%d\n",__LINE__);
    message_for(SUNLICHAO,C);
    int token34 = 40;
    message_for2(34);
    printf("%s\n",slc);
    return 0;
}