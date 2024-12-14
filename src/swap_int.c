#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y);

int main(void)
{
    int x, y;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);

    swap(&x, &y);
    printf("x: %d y: %d\n", x, y); 
    return  0;
}

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

