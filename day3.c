#include<stdio.h>

int main(void){
    int h_g ,w_g,yc;
    double h_y ,w_y,ych;
    if(scanf("%d%d",&h_g,&w_g) !=2) {
        fprintf(stderr,"输入错误\n");
        return 1;
    }
    ych=h_g/2.54;
    yc=ych/12;
    h_y=ych-yc*12;
    w_y=w_g/0.45359237;
    printf("身高%d英尺%.2f英寸,体重%.2f磅\n",yc,h_y,w_y);
    return 0;
    
        }
        