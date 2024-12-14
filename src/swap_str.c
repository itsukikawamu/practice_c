#include <stdio.h>
#include <stdlib.h>

void swap(char **a, char **b);

int main(void)
{
    char *x=malloc(100*sizeof(char));
    char *y=malloc(100*sizeof(char));
    printf("X: ");
    scanf("%99s", x);
    printf("Y: ");
    scanf("%99s", y);
    swap(&x, &y);
    printf("X: %s, Y: %s\n", x, y);
    free(x);
    free(y);
    return 0;
}
void swap(char **a, char **b)
{
    char *tmp = *a;
    *a = *b;
    *b = tmp;
}

