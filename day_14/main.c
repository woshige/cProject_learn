#include <stdio.h>
#include <string.h>


union Data {
    int i;
    float f;
    char str[20];
};
void access_union();

void print_union_size();

void access_union2();

void print_big_or_small();
int main() {
    print_union_size();
    access_union();
    access_union2();
    print_big_or_small();
    return 0;
}

void print_union_size() {
    union Data data;
    printf("dataµÄsize£º%d\n", (unsigned int) sizeof(data));
}
void access_union(){
    union Data data;
    data.f = 220.5;
    data.i = 100;
    strcpy(data.str,"c program");
    printf("data.f:%f\n",data.f);
    printf("data.i:%d\n",data.i);
    printf("data.str:%s\n",data.str);
}
void access_union2(){
    union Data data;
    data.i = 1;
    printf("data.i:%d\n",data.i);
    data.f = 220.5;
    printf("data.f:%f\n",data.f);
    strcpy(data.str,"c program");
    printf("data.str:%s\n",data.str);
}
void print_big_or_small(){
    int a = 0x11223344;
    int *pInt = &a;
    char *pChar = (char*)pInt;
    printf("%x\n",*pChar);
}