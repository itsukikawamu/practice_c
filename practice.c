#include <stdio.h>

int main(void)
{
    while (1)
    {
        int num = 0;
        char ch = '\n';
        printf("0以上の数を入力してください:");
        

        if( scanf("%d%c", &num, &ch) == 2 && ch == '\n' && num>= 0)
        {
            
            int i = 0;
            int product = 1;
            while ( i < num )
            {
                product *= i+1;
                i++;
                
            }
            printf("入力された数の階乗は %d\n", product);
            break;
        }
        else{
            printf("無効な入力です。整数を入力してください\n");
            while (getchar() != '\n');
            
        }
    }  
    return 0;  
}