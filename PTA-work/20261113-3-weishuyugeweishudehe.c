#include<stdio.h>

int main(void){
    int n,sum=0,wei=0;
    if(scanf("%d",&n) != 1) return 1;
    while(n!=0){
        sum=sum+n%10;
        wei++;
        n=n/10;
    }
    printf("%d %d",wei,sum);
    return 0;
}