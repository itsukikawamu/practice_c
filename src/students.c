#include <stdio.h>
#include <stdlib.h>
#include  <string.h>

int main(void)
{
    FILE *fp = fopen("data/students.csv", "a");
    if(fp==NULL)
    {
        printf("file could not open\n");
        return 1;
    }
    char name[100];
    char number[100];
    printf("name: ");
    scanf("%99s", name);
    printf("number: ");
    scanf("%99s", number);

    fprintf(fp, "%s,%s\n", name, number);
    fclose(fp);
    return 0;
}
