#include<stdio.h>

int main(void){
    int suiji,cishu,i,cai;
    if(scanf("%d %d",&suiji,&cishu)!=2) return 1;
    for(i=0;i<cishu;i++){
        if(scanf("%d",&cai)!=1) break;
        if(cai<0){
            printf("Game Over\n");
            break;
        }else if(cai>=0){
            if(cai>suiji){
                printf("Too big\n");
            }
            else if(cai<suiji){
                printf("Too small\n");
            }
            if(cai==suiji){
                if(i==0){
                    printf("Bingo!");
                }
                else if(i<=2&&i>=1){
                    printf("Lucky You!\n");
                }else{
                    printf("Good Guess!\n");
                }
                break;
            }
            if(i==cishu-1){
                printf("Game Over\n");
                break;
            }
        }
    }
    return 0;
}