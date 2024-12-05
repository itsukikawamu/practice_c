#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[100];
    printf("Input:  ");
    scanf("%99s", str);
    
    printf("Output: ");
    
    int i=0;
    int length=strlen(str);
    while (i<length)
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");

    return 0;
}
