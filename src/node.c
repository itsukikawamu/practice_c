#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node
{
    char *word;
    struct node *next;
} node;

int main(int argc, char *argv[])
{
    node *list=NULL;
    for(int i=0; i<argc; i++)
    {
        node *new=malloc(sizeof(node));
        if(new==NULL){return 1;}
        new->word = malloc(strlen(argv[i]+1));
        if(new->word==NULL)
        { free(new); return 1;}
        strcpy(new->word, argv[i]);
        new->next = list;
        list=new;
    }
    node *ptr=list;
    for(int i=1; i<argc; i++)
    {
        printf("%s,", ptr->word);
        ptr=ptr->next;
    }
    printf("\n");
    return 0;
}
