#include <stdio.h>

int main(void){
    int x, y;
    for(x=1; x<=9; x++){
        for(y=1; y<=9; y++){
            printf("%d*%d=%d\t", y, x, x*y);
        }
        printf("\n");
    }
    
    return 0;
}