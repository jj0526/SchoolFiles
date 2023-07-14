#include <stdio.h>

int main()
{
    int count = 0;
    int i = 0;

    for (int i = 0; i < 100; i++)
    {
        if ((i + 1) % 2 == 1)
        {
            printf("%d\n", i + 1);

            count = count + 1;
        }
    }

    printf("홀수의 개수는 %d개 입니다", count);

    return 0;
    
}
