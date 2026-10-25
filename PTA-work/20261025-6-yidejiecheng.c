#include<stdio.h>

int main(void){
    int i,n;
    double sum=1.0/1,count=1;
    if(scanf("%d",&n) != 1) return 1;
    for(i=1;i <= n-1;i++){
        count = count * i;
        sum = sum + 1.0/ count;
    }
    printf("%f",sum);
    return 0;
}