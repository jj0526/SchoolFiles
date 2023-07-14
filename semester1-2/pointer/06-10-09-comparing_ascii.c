#include <stdio.h>

int main(){
    char a;
    char b;
    scanf(" %c", &a);
    scanf(" %c", &b);

    if (a>b){
        printf("%c > %c", a, b);
    }
    else{
        printf("the last one is bigger");
    }
}