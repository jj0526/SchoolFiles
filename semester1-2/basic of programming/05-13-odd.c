#include <stdio.h>

int odd_even(int num);

int main(){

    int num;
    printf("input a number");
    scanf("%d", &num);
    odd_even(num);
    if (odd_even(num) == 0)
    {
        printf("Even");
    }
    else if (odd_even(num)==1){
        printf("Odd");
    }
}

int odd_even(int num)
{
    if (num%2 ==0)
    {
        return 0;
    }
    else{
        return 1;
    }
}