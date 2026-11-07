#include<stdio.h>

int main(void){
    int m;
    if(scanf("%d",&m)!=1) return 1;
    switch(m){
        case 1:
        case 2:
        case 3:
            printf("第一季度");
            break;
        case 4:
        case 5:
        case 6:
            printf("第二季度");
            break;
        case 7:
        case 8:
        case 9:
            printf("第三季度");
            break;
        case 10:
        case 11:
        case 12:
            printf("第四季度");
            break;
        default:
            printf("输入月份无效");
            break;
    }
    return 0;
}