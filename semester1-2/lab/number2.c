#include <stdio.h>

int main()
{

    int num;
    printf("Type the maufacturer code <1 to 4> :");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("the code : 1, Samsung");
    }
    else if (num == 2)
    {
        printf("the code : 2, LG");
    }
    else if (num == 3)
    {
        printf("the code : 3, Apple");
    }
    else if (num == 4)
    {
        printf("the code : 4, Google");
    }
    else
    {
        printf("invalid code");
    }
    return 0;
}