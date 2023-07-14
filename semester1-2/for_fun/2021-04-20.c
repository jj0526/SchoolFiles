#include <stdio.h>

int main(){
    
    char a;
    char b;
    char result;

    printf("input a number\n");
    scanf("%c",&a);
    printf("input another number\n");
    scanf("%c", &b);

    result = a + b;

    printf("%d",result);

    return 0;
}