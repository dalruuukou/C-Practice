#include<stdio.h>

int main(void){
    int m,n,i,j,sum=0,count=0;
    if(scanf("%d %d",&m,&n) != 2) return 1;
    for(i=m;i<=n;i++){
        sum=0;
        for(j=1;j<=i/2;j++){
            if(i%j==0){
                sum=sum+j;
            }
        }
        if(sum==i){
            count++;
            printf("%d = ",i);
            int first=1;
            for(j=1;j<=i/2;j++){
                if(i%j==0){
                    if(first==1){
                        printf("%d",j);
                        first=0;
                    }else{
                        printf(" + %d",j);
                    }
                    if(j==i/2){
                        printf("\n");
                    }
                }
            }
        }
    }
    if(count==0){
        printf("None");
    }
    return 0;
}