#include <stdio.h>

int main(){
    int num;

    printf("whats the num");
    scanf("%d",&num);
    int count = 0;

    for (int i = 1; i<=num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("It's a PRIME NUM");
    }
    else
    {
        printf("It's not a prime number");
    }
    
    return 0;

}