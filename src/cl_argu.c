#include <stdio.h>

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Put two command-line arguments\n");
        return 1;
    }

    else
    {
    printf("%d, %s, %s\n", argc, argv[0], argv[1]);
    }

    return 0;
}
