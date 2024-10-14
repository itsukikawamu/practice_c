#include <stdio.h>

int main(void)
{
    int input;
    printf("整数を入力してください: ");
    scanf("%d", &input);

    if (input % 2 == 0)
    {
        printf("偶数です。\n");
    }
    else 
    {
        printf("奇数です。\n");
    }

}