#include<stdio.h>

int main(void){
    int n,i;
    double sum=1,count,number=1.0;
    if(scanf("%d",&n) != 1) return 1;
    for(i=1;i<=n;i++){
        number=number*i;
        count=1.0/number;
        sum=sum+count;
    }
    printf("%.8f",sum);
    return 0;
}  