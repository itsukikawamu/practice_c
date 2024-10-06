#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        printf("After: ");
        for (int i =0, n = strlen(argv[1]); i < n; i++)
        {
            printf("%c", toupper(argv[1][i]));
        }
        printf("\n");
        return 0;
    }
    else
    {
        printf("You missed an argument.\n");
        return 1;
    }
    
    
}


