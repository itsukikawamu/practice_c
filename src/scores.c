#include <stdio.h>

int N;
float avarage(int length, int array[]);

int main(void)
{
    printf("Size: ");
    scanf("%d", &N);
    int scores[N];   

    for (int i=0; i<N; i++)
    {
        printf("Score: ");
        scanf("%d", &scores[i]);
    }

    printf("avarage: %f\n", avarage(N, scores));
}    

float avarage(int length, int array[])
{
    int sum=0;
    for (int i=0; i<length; i++)
    {
        sum += array[i];
    }
    return sum / (float)length;
}


