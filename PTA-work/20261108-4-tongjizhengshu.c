#include<stdio.h>

int main(void){
    int n,i,youxiu=0,hege=0,meiyou=0,shu;
    if(scanf("%d\n",&n)!=1) return 1;
    for(i=1;i<=n;i++){
        if(scanf("%d",&shu) != 1) return 1;
        if(shu>=85){
            youxiu++;
        }else if(shu<85 && shu>=60){
            hege++;
        }else{
            meiyou++;
        }
    }
    printf("%d %d %d",youxiu,hege,meiyou);
    return 0;
}