#include<stdio.h>

int main(void){
    int juli;
    double chefei;
    if(scanf("%d",&juli) != 1) return 1;
    if(juli <= 3){
        chefei=8;
        printf("%.6f",chefei);
    }
    if(juli > 3){
        chefei= (juli - 3)*1.8+8;
            printf("%.6f",chefei);
    }
    return 0;
}