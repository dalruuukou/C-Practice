#include<stdio.h>

int xiangjia(int num);

int main(void){
    int n,na,nb,sa,sb,i;
    if(scanf("%d",&n)!=1) return 1;
    for(i=1;i<=n;i++){
        if(scanf("%d %d",&na,&nb)!=2) return 1;
        sa=xiangjia(na);
        sb=xiangjia(nb);
        if(na%sb==0&&nb%sa!=0){
            printf("A\n");
        }else if(na%sb!=0&&nb%sa==0){
            printf("B\n");
        }else if(na%sb==0&&nb%sa==0){
            if(na>nb){
                printf("A\n");
            }else{
                printf("B\n");
            }
        }else{
            if(na>nb){
                printf("A\n");
            }else{
                printf("B\n");
            }
        }
    }
    return 0;
}
int xiangjia(int num){
    int result=0;
    while(num!=0){
        result=result+num%10;
        num=num/10;
    }
    return result;
}