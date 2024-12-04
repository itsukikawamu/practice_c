#include <stdio.h>

int add(int a, int b);

int main(void){
    int x;
    int y;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    
    printf("%d\n", add(x,y));
    return 0;
}

int add(int a, int b){
    return a+b;
}
