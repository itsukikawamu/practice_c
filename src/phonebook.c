#include <stdio.h>
#include <string.h>

int main(void)
{
    typedef struct
    {
        char name[100];
        char number[100];
    } person;

    person people[3];  
    strcpy(people[0].name, "Ken");
    strcpy(people[0].number, "070-1208-0000");
    strcpy(people[1].name, "Eli");
    strcpy(people[1].number, "070-1208-1111");
    strcpy(people[2].name, "Mia");
    strcpy(people[2].number, "070-1208-2222");

    char name[100];
    printf("Name: ");
    scanf("%99s", name);
    int i=0;
    while(i<3)
    {
        if(strcmp(people[i].name, name)==0)
        {
            printf("Found: %s\n", people[i].number);
            return 0;
        }
        else
        {
            i++;
        }
    }

    printf("Not found\n");
    return 1;
}



















