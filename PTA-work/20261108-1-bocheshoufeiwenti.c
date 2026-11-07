#include<stdio.h>
#include<math.h>

int main(void){
    int lei,days;
    double time,fei=0;
    if(scanf("%d %lf",&lei,&time)!=2) return 1;
    days=time/24;
    time=time-days*24;
    switch(lei){
        case 1:
            if(time<=1){
                fei=50*days+5;
                printf("%.2f\n",fei);
            }else{
                fei=5+ceil((time-1)/0.5-1e-9)*2;
                if(fei>=50){
                    fei=(days+1)*50;
                    printf("%.2f\n",fei);
                }else{
                    fei=fei+days*50;
                    printf("%.2f\n",fei);}
            }
            break;
        case 2:
            if(time<=2){
                fei=30*days+5;
                printf("%.2f\n",fei);
            }else{
                fei=5+ceil((time-2-1e-9))*2;
                if(fei>=30){
                    fei=(days+1)*30;
                    printf("%.2f\n",fei);
                }else{
                    fei=fei+days*30;
                    printf("%.2f\n",fei);}
            }
            break;
        case 3:
            if(time<=3){
                fei=20*days+5;
                printf("%.2f\n",fei);
            }else{
                fei=5+ceil((time-3-1e-9))*1;
                if(fei>=20){
                    fei=(days+1)*20;
                    printf("%.2f\n",fei);
                }else{
                    fei=fei+days*20;
                    printf("%.2f\n",fei);}
            }
            break;
    }
    return 0;
}