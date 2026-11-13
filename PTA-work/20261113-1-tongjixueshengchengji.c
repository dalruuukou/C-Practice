#include<stdio.h>

int main(void){
    int n,i,num,A=0,B=0,C=0,D=0,E=0;
    if(scanf("%d",&n) != 1) return 1;
    for(i=1;i<=n;i++){
        if(scanf("%d",&num) != 1) return 1;
        if(num>=90&&num<=100){
            A++;
        }else if(num>=80&&num<90){
            B++;
        }else if(num>=70&&num<80){
            C++;
        }else if(num>=60&&num<70){
            D++;
        }else{
            E++;
        }
    }
    printf("%d %d %d %d %d",A,B,C,D,E);
    return 0;
}