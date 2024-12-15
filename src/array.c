#include <stdio.h>

int main(void)
{
    int size;
    printf("size: ");
    scanf("%d", &size);
    int array[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("queue:");
    for(int i=0; i<size; i++)
    {
        printf("%d", array[i]);
    }
    printf("\n");

    printf("stack:");
    for(int i=size-1; i>=0; i--)
    {
        printf("%d", array[i]);
    }
    printf("\n");
    return 0;
}
