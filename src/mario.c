#include <stdio.h>

int main(void)
{
    // Prompt user for positive integer
    int n;
    do {
        printf("Size:: ");
        scanf("%d", &n);
    }
    while (n < 1);

    // Print an n-byn grid of bricks
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    
    return 0;
}
