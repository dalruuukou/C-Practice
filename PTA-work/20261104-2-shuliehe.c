#include<stdio.h>

int main(void){
    int n,i; //n<=11
    double sum=1.0,flag=1;
    if(scanf("%d",&n)!=1) return 1;
    for(i=1;i<=n-1;i++){
        flag=flag*i;
        sum=sum+1.0/flag;
    }
    printf("%.6f",sum);
    return 0;
}