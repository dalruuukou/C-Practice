#include<stdio.h>

int main(void){
    int age,foods,canfei,i;
    if(scanf("%d %d",&age,&foods)!=2) return 1;
    i=foods/250*10;
    if(age<=6){
        printf("%d",10 + i);
    }
    if(age > 6&& age <= 12){
        printf("%d",39 + i);
    }
    if(age > 12){
        printf("%d",78 + i);
    }
    return 0;
}