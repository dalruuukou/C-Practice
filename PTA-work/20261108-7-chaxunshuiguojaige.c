#include<stdio.h>

int main(void){
    printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
    int count=0,num;
    while(count<5){
        if(scanf("%d",&num) != 1) return 1;
        if(num==0){
            break;
        }else if(num==1){
            printf("price = 3.00\n");
        }else if(num==2){
            printf("price = 2.50\n");
        }else if(num==3){
            printf("price = 4.10\n");
        }else if(num==4){
            printf("price = 10.20\n");}
        else{
            printf("price = 0.00\n");
        }
        count++;
    }
    return 0;
}