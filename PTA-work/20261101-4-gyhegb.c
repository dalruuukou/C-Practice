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

//辗转相除法
/*#include<stdio.h>

int main(void){
    int m, n;
    if(scanf("%d %d", &m, &n) != 2) return 1;
    
    // 保存原始值，因为辗转相除会改变它们
    int a = m, b = n, temp;
    
    // 1. 辗转相除法求最大公约数
    while(b != 0){
        temp = a % b;
        a = b;
        b = temp;
    }
    int gy = a;
    
    // 2. 利用公式求最小公倍数（先除后乘防溢出）
    int gb = (m / gy) * n;
    
    printf("%d %d\n", gy, gb);
    return 0;
}*/