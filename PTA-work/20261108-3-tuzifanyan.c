#include<stdio.h>

int main(void){
    int n,month,a,b,sum;
    if(scanf("%d",&n) != 1) return 1;
    a=1;
    b=1;
    sum=a+b;
    month=3;
    if(n<=1){
        printf("1\n");
        return 0;
    }
    while(sum<n){
        a=b;
        b=sum;
        sum=a+b;
        month++;
    }
    printf("%d",month);
    return 0;
}