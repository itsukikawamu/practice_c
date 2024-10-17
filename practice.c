#include <stdio.h>

long factorial(long n)
{
    if (n == 0){
        return 1;
    }
    else{
        return n * factorial(n - 1);
    }
}

int main(void)
{
    long num;
    printf("自然数を入力してください:");
    
    while ( scanf("%ld", &num) != 1 || num < 0){
        printf("自然数を入力してください。");
        while(getchar()!='\n');
        scanf("%ld", &num);
    }
    num = factorial(num);
    printf("%ld\n", num);

    return 0;
}