#include <stdio.h>

int main()
{
    int num[10];

    printf("숫자를 10개 입력해 주십시오");
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d번째 정수 : %d \n", i + 1, num[i]);
    }

    return 0;
}