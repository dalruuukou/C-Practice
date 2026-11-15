#include <stdio.h>

void hollowPyramid ( int n );

int main()
{    
    int n;

    if(scanf("%d", &n) !=1) return 1;
    hollowPyramid ( n );

    return 0;
}
void hollowPyramid( int n ){
    int i,j;
    for(i=1;i<=n;i++){
        if(i==1){
            for(j=1;j<=n-1;j++){
                printf(" ");
            }
            printf("%d\n",i);
        }else if(i>1&&i!=n){
            for(j=i;j<=n-1;j++){
                printf(" ");
            }
            printf("%d",i);
            for(j=1;j<=2*i-3;j++){
                printf(" ");
            }
            printf("%d\n",i);
        }else{
            for(j=1;j<=2*i-1;j++){
                printf("%d",i);
            }
            printf("\n");
        }
    }
}