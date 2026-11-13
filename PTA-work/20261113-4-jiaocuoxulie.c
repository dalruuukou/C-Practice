#include<stdio.h>

int main(void){
    int sign=1;
    double num=1.0,eps,sum=0,i=1.0;
    if(scanf("%lf",&eps) != 1) return 1;
    while(num>eps){
        sum=sum+sign*num;
        sign=-sign;
        i++;
        num=1/(3*i-2);
    }
    sum=sum+sign*num;
    printf("sum = %.6f",sum);
    return 0;
}