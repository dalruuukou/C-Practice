#include<stdio.h>

int main(void){
    int n,i,flag,min=1;
    if(scanf("%d",&n)!=1) return 1;
    for(i=1;i<=n;i++){
        if(scanf("%d",&flag)!=1) return 1;
        if(i==1){
            min=flag;
        }
        if(i>=2){
            if(flag<=min){
                min=flag;
            }
        }
    }
    printf("min = %d\n",min);
    return 0;
}