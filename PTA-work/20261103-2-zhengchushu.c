#include<stdio.h>

int main(void){
    long long n,k,i;
    if(scanf("%lld %lld",&n,&k) != 2) return 1;
    i= (n/k+1)*k;
    printf("%lld",i);
}