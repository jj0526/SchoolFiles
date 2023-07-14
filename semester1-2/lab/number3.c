#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 100; i <= 200; i++)
    {
        if ((i % 3 != 0) && (i % 2 == 1))
        {
            sum = sum + i;
        }
    }
    printf("The sum is %d", sum);

    return 0;
}