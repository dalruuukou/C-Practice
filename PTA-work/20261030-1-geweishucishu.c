#include<stdio.h>

int main(void){
    int a,b,count=0,ta;
    if(scanf("%d %d",&a,&b)!=2) return 1;
    ta=a;
    do{
        if(ta%10==b){
            count++;
            ta=ta/10;
        }
        else{
            ta=ta/10;
        }
    }while(ta!=0);
    printf("%d",count);
    return 0;

}