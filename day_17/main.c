#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void memory_1();

void memory_2();

int main() {
    memory_1();
}

void memory_1() {
    char name[50];
    char *description;
    strcpy(name, "Zara Ali");
    /*动态的分配内存*/
    description = (char *) malloc(200 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "error - unable to allocate required memory\n");
    } else {
        strcpy(description, "Zara ali a DPS student in class 10th");
    }
    printf("Name = %s\n", name);
    printf("Description:%s\n", description);
}

void memory_2() {
    char name[100];
    char *description;
    strcpy(name, "zara ali");
    description = (char *) malloc(30 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error-unable to allocate memory\n");
    } else {
        strcpy(description,"zara ali a DPS student.");
    }
    /*扩展分配的内存大小*/
    description = (char *)realloc(description,100 * sizeof(char));
    if(description == NULL){
        fprintf(stderr,"Error-unable to allocate memory\n");
    }else{
        strcat(description,"she is in class 10th");
    };
    printf("name=%s\n",name);
    printf("description:%s\n",description);
    /*释放内存*/
    free(description);
}