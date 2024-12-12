#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    printf("input string:  ");
    scanf("%99s", str);
    int n=strlen(str);
    for(int i=0; i<n-1; i++)
    {    
        int k=0;
        for (int j=0; j<n-1-i; j++)
        {
            
            if(str[j]>str[j+1])
            {
                char tmp=str[j];
                str[j]=str[j+1];
                str[j+1]=tmp;
                k++;
            }
        }
        
        if (k==0)
        {
            break;
        }
    }
    printf("output string: %s\n", str);
    return 0;
}
