#include <stdio.h>

int main(void)
{
    char str[100];
    printf("Put string: ");
    scanf("%99s", str);
    
    int n=0;
    while (str[n] != '\0')
    {
        n++;
    }
    printf("strlen is %d\n", n);
}
