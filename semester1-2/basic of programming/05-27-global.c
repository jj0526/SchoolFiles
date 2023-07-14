#include <stdio.h>

int num1 = 10;

int main(){
    printf("%d\n", num1); //10

    change();
    printf("%d", num1); //20
    
}

void change(){
    num1 = num1 + 10;
}