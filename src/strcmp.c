#include <stdio.h>

int main(void)
{
    char s1[100];
    char s2[100];
    printf("Put two strings: ");
    scanf("%99s %99s", s1, s2);
    int i=0;
    while(s1[i] != '\0' && s1[i]==s2[i])
    {
        i++;
    }
    printf("%d\n", s1[i]-s2[i]);
    return 0;
}

