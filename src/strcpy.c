#include <stdio.h>

int main(void)
{
    char s1[100];
    printf("Enter your string:  ");
    scanf("%99s", s1);
    int i=0;
    char s2[100];
    while(s1[i] != '\0')
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i]='\0';
    
    printf("Copied your string: %s\n", s2);
    return 0;
}
