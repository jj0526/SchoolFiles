#include <stdio.h>

int main(){
    int num1;
    int num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    num_switch(&num1, &num2); // sending the addresses

    printf("%d\n", num1);
    printf("%d\n", num2);
}

int num_switch(int *num1, int *num2){
    int temp=*num1;
    *num1=*num2;
    *num2=temp;

    return 0;
}