#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    printf("Before: ");
    char str[50]; 
    fgets(str, 50, stdin);
    printf("After: ");
    for (int i =0, n = strlen(str); i < n; i++)
    {
        if ( str[i] >= 'a' && str[i] <= 'z')
        {
            printf("%c", str[i] - 32);
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    return 0;
}


