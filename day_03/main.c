#include <stdio.h>

int print_array();
int print_multi_array();
double getAverage(const int params[],int size);
void print_a(int array[][5],int n,int m);
void print_b(int (*array)[5],int n,int m);
void print_c(const int *array,int n,int m);
int main() {
    print_array();
    print_multi_array();
    int balance[5] = {1000,2,3,17,50};
    double avg;
    avg = getAverage(balance,5);
    printf("balance的平均值为： %f\n",avg);

    int a[5][5] = {{1,2},{3,4,5},{6},{7},{0,8}};
    printf("---------\n");
    print_a(a,5,5);
    printf("--------\n");
    print_b(a,5,5);
    printf("---------\n");
    print_c(&a[0][0],5,5);
}

int print_array() {
    int n[10];
    int i, j;
    for (i = 0; i < 10; i++) {
        n[i] = i + 100;
    }
    for (j = 0; j < 10; j++) {
        printf("Element[%d] = %d\n", j, n[j]);
    }
    return 0;
}
int print_multi_array(){
    int a[5][2] = { {0,0},{1,2},{2,4},{3,6},{4,8} };
    int i,j;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 2; j++){
            printf("a[%d][%d] = %d\n",i,j,a[i][j]);
        }
    }
}
double getAverage(const int params[],int size){
    double sum = 0,avg;
    int i;
    for(i = 0; i < size; i++){
        sum += params[i];
    }
    avg = sum /size;
    return avg;
}
void print_a(int array[][5],int n,int m){
    int i,j;
    for(i = 0; i < n; i++){
        for(j = 0; j < m;j++){
            printf("%d",array[i][j]);
        }
        printf("\n");
    }
}
void print_b(int (*array)[5],int n,int m){
    int i,j;
    for(i = 0;i < n;i++){
        for(j = 0; j < m;j++){
            printf("%d",array[i][j]);
        }
        printf("\n");
    }
}
void print_c(const int *array,int n,int m){
    int i,j;
    for(i = 0;i < n;i++){
        for(j = 0; j < m;j++){
            printf("%d",*(array + i*m + j));
        }
        printf("\n");
    }
}
