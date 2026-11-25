#include<stdio.h>

float max(float d1,float d2,float d3);

int main(void){
    int i,n,count=0;
    float d1,d2,d3,maxss=0,flag;
    if(scanf("%d",&n) != 1) return 1;
    for(i=1;i<=n;i++){
        if(scanf("%f %f %f",&d1,&d2,&d3) != 3) return 1;
        if(i==1){
            flag=max(d1,d2,d3);
            maxss=max(d1,d2,d3);
            count=i;
        }else{
            flag=max(d1,d2,d3);
            if(flag>maxss){
                maxss=flag;
                count=i;
            }
        }
    }
    printf("%d %.2f",count,maxss);
    return 0;
}

float max(float d1,float d2,float d3){
    float maxs;
    maxs=d1;
    if(d2>maxs){
        maxs=d2;
        if(d3>maxs){
            maxs=d3;
        }
    }else{
        if(d3>maxs){
            maxs=d3;
        }
    }
    return maxs;
}