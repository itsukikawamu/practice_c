#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str = malloc( sizeof(char) * 51 );
    if (str == NULL) exit(1);

    printf("文字列を入力してください。(50文字まで)\n");
    fgets(str, 50, stdin);

    int count[10] = {0};
    int i  = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            count[str[i]-'0']++;
        }
        i++;
    }

    int j = 0;
    printf("各数字の出現回数\n");
    while(j < 10)
    {
        printf("%d: %d回\n", j, count[j]);
        j++;
    }


    free(str);
    return 0;
}