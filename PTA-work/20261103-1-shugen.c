#include<stdio.h>

int main(void){
    int n,sum=0;
    if(scanf("%d",&n)!=1) return 1;
    if(n<10){
        printf("%d",n);
        return 0;
    }
    while(n>=10){
        sum=0;
        while(n>0){
            sum=sum+ n%10;
            n=n/10;
        }
        n=sum;
    }
    printf("%d",n);
    return 0;
}