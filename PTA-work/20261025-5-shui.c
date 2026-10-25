#include<stdio.h>

int main(void){
    double shui,salary;
    if(scanf("%lf",&salary) != 1) return 0;
    if(salary<=3500){
        shui=0.00;
    }
    else if(salary>3500&&salary<=5000){
        shui=(salary-3500)*0.05;
    }
    else if(salary>5000&&salary<=8000){
        shui=(salary-5000)*0.1+1500*0.05;
    }
    else if(salary>8000&&salary<=12000){
        shui=(salary-8000)*0.15+1500*0.05+3000*0.1;
    }
    else{
        shui=(salary-12000)*0.2+1500*0.05+3000*0.1+4000*0.15;
    }
    printf("%.2f",shui);
    return 0;
}