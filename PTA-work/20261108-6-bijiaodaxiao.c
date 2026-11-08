#include<stdio.h>

int main(void){
    int a,b,c;
    if(scanf("%d %d %d",&a,&b,&c)!=3) return 1;
    if(a<b){
        if(b<c){
            printf("%d->%d->%d",a,b,c);
        }else if(b>=c){
            if(a>c){
                printf("%d->%d->%d",c,a,b);
            }else{
                printf("%d->%d->%d",a,c,b);
            }
        }
    }
     else if(a>=b){
         if(b>c){
             printf("%d->%d->%d",c,b,a);
         }else if(b<=c){
             if(a>c){
                 printf("%d->%d->%d",b,c,a);
             }else{
                 printf("%d->%d->%d",b,a,c);
             }
         }
     }
    return 0;
}