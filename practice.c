#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str = malloc( sizeof(char) * 50 );
    if (str == NULL) exit(1);

    printf("文字列を入力してください。\n");
    scanf("%s", str);
    printf("%s\n", str);

    free(str);
    return 0;
}