#include <stdio.h>

int main(){

    int num1;
    int num2;
    int tmp;
    int gcd[20];

    printf("input a number\n");
    scanf("%d",&num1);                 //smaller

    printf("input a number 2 \n");
    scanf("%d",&num2);

    if (num1>num2)
    {
        tmp = num1;
        num1 = num2;
        num2 = tmp;
    }
    int j = 0;

    for (int i = 1; i<=num1; i++)
    {
        if ((num1%i==0)&&(num2%i==0))
        {
            gcd[j] = i;
            j++;
        } 
    }
    for (int i = 0; i<j; i++)
    {
        printf("%d ",gcd[i]);
    }

    printf("lcd : %d", num1*num2/gcd[j-1]);

    return 0;

}