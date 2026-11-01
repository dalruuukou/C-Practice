#include<stdio.h>

int main(void){
    int n,sum=0,count=0,i=1,flag=0;
    if(scanf("%d",&n)!=1) return 1;
    
    while(count < n){
        if(i % 2 != 0){
            sum = sum+i;
            count++;
            flag = i;
            i++;
        }else{
            i++;
        }
    }
    printf("第%d个奇数为：%d\n",n,flag);
    printf("前%d个奇数的和为：%d\n",n,sum);
    return 0;
}