#include<stdio.h>
#include<math.h>

int main(void){
    int n,i;
    if(scanf("%d",&n)!=1)return 1;
    for(i=0;i <= n;i++){
        printf("pow(3,%d) = %.0lf\n",i,pow(3,i));
    }
    return 0;
}
/*
#include <stdio.h>

int main(void) {
    int n;
    // 用 long long 防止 n 较大时 3 的幂次超出 int 范围（int 最多存到 3^19）
    long long res = 1; 
    
    if (scanf("%d", &n) != 1) return 1;

    for (int i = 0; i <= n; i++) {
        // 输出时用 %lld（long long 的格式符）
        printf("pow(3,%d) = %lld\n", i, res);
        res = res * 3; // 为下一轮做准备
    }
    return 0;
}
*/
//deepseek给的更优解