#include<stdio.h>

int main(void){
    int N,M,K;
    char X[100];
    if(scanf("%d %s %d %d",&N,X,&M,&K) !=4 ) return 1;
    if(K==N){
        printf("mei you mai %s de\n",X);
    }
    else if(K==M){
        printf("kan dao le mai %s de\n",X);
    }
    else{
        printf("wang le zhao mai %s de\n",X);
    }
    return 0;
}