#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    //コマンドラインで引数を1つとると大文字に変換
    if (argc == 2)  
    {
        //大文字変換前を表示
        printf("Before: ");
        printf("%s\n", argv[1]); 

        //大文字変換後を表示
        printf("AFTER: ");
        for (int i =0, n = strlen(argv[1]); i < n; i++)
        {
            printf("%c", toupper(argv[1][i]));
        }
        printf("\n");
        return 0;
    }
    // 引数が過少・過多なら大文字変換せず差し戻す
    else
    {
        printf("Input an argument correctly.\n");
        return 1;
    }
    
    
}


