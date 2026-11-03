#include<stdio.h>

int main(void){
    int d; // d>=1 && d<=7   
    if(scanf("%d",&d)!=1) return 1;
    if(d<=0 || d>7){
        printf("Invalid Input!");
    }else if(d>0 && d<=5){
        printf("%d",d+2);
    }else if(d==6){
        printf("1");
    }else{
        printf("2");
    }
    return 0;
}
