#include<stdio.h>

int main(void){
    int n,nan,nv,hai;
    if(scanf("%d",&n)!=1) return 1;
    for(nan=0;nan<=n/4;nan++){
        for(nv=0;nv<=n/3;nv++){
            hai=n-nan-nv;
            if(hai%2!=0){
                continue;
            }else{
                if(nan*4+nv*3+hai/2==n){
                    printf("男%d人，女%d人，小孩%d人\n",nan,nv,hai);
                }
            }
        }
    }
    return 0;
    
}