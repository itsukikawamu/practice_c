#include <stdio.h>

int main(void)
{
    int size = 10;
    int input[size];
    int i=0;
    printf("%d個の整数を入力してください。", size);
    while ( i < size )
    {
        printf("%d個目の整数を入力してください: ", i+1);
        scanf("%d", &input[i]);
        i++;
    }


    int j=0;
    int sum = 0;
    while ( j < size )
    {
        sum += input[j];
        j++;
    }
    float average = 0;
    average = (float)sum / size;
    printf("平均は%.3f", average);


}