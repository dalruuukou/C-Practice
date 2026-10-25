#include<stdio.h>

int main(void){
    int shu;
    if(scanf("%d",&shu) != 1) return 1;
    if(shu >= 0&& shu<10){
        printf("位数 = 1");
    }
    else if(shu >= 10&& shu<100){
        printf("位数 = 2");
    }
    else if(shu >= 100&& shu<1000){
        printf("位数 = 3");
    }
    else if(shu >= 1000&& shu<10000){
        printf("位数 = 4");
    }
    else{
        printf("输入数据太大了");
    }
    return 0;
}