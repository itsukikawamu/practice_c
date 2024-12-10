#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100];
    printf("Input string:  ");
    scanf("%99s", s);
    char smallest;
    int k;
    int len = strlen(s);
    for(int i=0; i<len-1; i++)
    {
        smallest = s[i];
        k=i;
        char tmp; 
        for(int j=i+1; j<len; j++)
        {
            if (smallest>s[j])
            {
                smallest = s[j];
                k=j;
            }
                  
        }
        if (k!=i)
        {
            tmp=s[i];
            s[i]=smallest;
            s[k]=tmp;
        }
    }
    printf("Output string: %s\n", s);

    return 0;
}


