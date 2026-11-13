#include<stdio.h>
#include<math.h>

int main(void){
    int a,b,c;
    double area,s,zhou;
    if(scanf("%d %d %d",&a,&b,&c) != 3) return 1;
    if(a+b>c&&a+c>b&&b+c>a){
        zhou=a+b+c;
        s=(a+b+c)/2.0;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("area = %.2f; perimeter = %.2f",area,zhou);
    }else{
        printf("These sides do not correspond to a valid triangle");
    }
    return 0;
}