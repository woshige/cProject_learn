//
// Created by Administrator on 2020/3/14 0014.
//
#include <time.h>

void get_seconds(unsigned long *par) {
    /*获取当前的秒数*/
    *par = (unsigned long) time(NULL);
}

double getAverage(int *arr,int size){
    int i,sum = 0;
    double avg;
    for(i = 0; i < size; i++){
        sum += arr[i];
    }
    avg = (double )sum / size;
    return avg;
}