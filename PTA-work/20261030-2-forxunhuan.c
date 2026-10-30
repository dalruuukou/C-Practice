#include<stdio.h>

int main(void){
    int a,b,sum=0,i;
    if(scanf("%d %d",&a,&b) != 2) return 1;
    for(i= a;i<=b;i++){
        if(i%2==0){
            continue;
        }else{
            sum=sum+i;
        }
    }
    printf("%d",sum);
    return 0;
}