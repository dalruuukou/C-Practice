#include<stdio.h>//被这道题搞得焦头烂额，终于写对了

int main(void){
    int ge,shi,bai,shu,upper,lower;
    if(scanf("%d%d",&lower,&upper)!=2) return 1;
    if(lower > upper){
        printf("Invalid Value.\n");
    }
    else if(lower < 100||upper >999){
        printf("Invalid Value.\n");
    }
    else if(lower >= 100&&upper <=999){
        for(shu=lower;shu<=upper;shu++){
            bai = shu / 100;
            shi = (shu - bai * 100) / 10;
            ge = shu -shi * 10 -bai * 100;
            if(shu == bai*bai*bai + ge*ge*ge + shi*shi*shi){
                printf("%d\n",shu);
            }
        }
    }
    return 0;
}