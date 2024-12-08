#include <stdio.h>

int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};
    int n;
    printf("Number: ");
    scanf("%d",&n);
    int i=0;
    while(i<7)
    {
        if (numbers[i]==n)
        {
            printf("Found\n");
            return 0;
        }
                    i++;
    }
    printf("Not found\n");
    return 1;
}
