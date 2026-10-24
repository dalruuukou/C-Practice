#include<stdio.h>//火车运行时间

int main(void){
    int start,arrive,hour,minute;
    if(scanf("%d %d",&start,&arrive) != 2) return 1;
    if(arrive%100 >= start%100){
        hour=arrive/100 - start/100;
        minute=arrive%100 - start%100;
    }else{
        minute=arrive%100 +(60- start%100);
        hour=arrive/100 - start/100-1;
    }
    printf("%02d:%02d",hour,minute);
    return 0;
}