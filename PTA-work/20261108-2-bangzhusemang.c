#include<stdio.h>

int main(void){
    int a,b;
    if(scanf("%d %d",&a,&b)!=2) return 1;
    switch(a){
        case 0:
            if(b==0){
                printf("biii\n");
                printf("stop\n");
            }else if(b==1){
                printf("-\n");
                printf("stop\n");
            }
            break;
        case 1:
            if(b==0){
                printf("dudu\n");
                printf("move\n");
            }else if(b==1){
                printf("-\n");
                printf("move\n");
            }
            break;
        case 2:
            printf("-\n");
            printf("stop\n");
            break;
    }
    return 0;
}