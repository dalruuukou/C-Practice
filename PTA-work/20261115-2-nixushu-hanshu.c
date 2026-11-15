#include <stdio.h>

int reverse( int number );
    
int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}
int reverse( int number ){
    int s,result=0,first=1,sign=1;
    if(number<=0){
        number=-number;
        sign=0;
    }
    while(number!=0){
        if(first==1){
            s=number%10;
            if(s!=0){
                result=result+s;
            }
            first=0;
            number=number/10;
        }else{
            s=number%10;
            result=result*10+s;
            number=number/10;
        }
    }
    if(sign==0){
        result=-result;
    }
    return result;
}
//deepseek给的更简洁的写法
/*int reverse( int number ){
    int result = 0;
    while(number != 0){
        int s = number % 10;          // 取出最后一位（负数取余也是负数，完美兼容）
        result = result * 10 + s;     // 拼接到结果后面
        number = number / 10;         // 砍掉最后一位
    }
    return result;
}*/