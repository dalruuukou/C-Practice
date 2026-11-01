#include<stdio.h>

int main(void){
    int m,n,gy,gb;
    if(scanf("%d %d",&m,&n) != 2) return 1;
    gy=(m<n) ? m:n;
    while(m%gy!=0 || n%gy!=0){
        gy--;
    }
    gb= (m > n) ?m:n;
    while(gb%m!=0 || gb%n!=0){
        gb++;
    }
    printf("%d %d",gy,gb);
    return 0;
}


