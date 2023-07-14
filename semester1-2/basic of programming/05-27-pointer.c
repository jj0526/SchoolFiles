#include <stdio.h>

void change(int *num1);
int main(){

    int num1 = 10;

    printf("%d\n", num1); //10

    change(&num1);

    printf("%d\n", num1); // 15

    return 0;
}

void change(int *num1){
    *num1 = *num1 + 5;
}