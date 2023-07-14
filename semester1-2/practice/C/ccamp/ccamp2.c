#include <stdio.h>

int main()
{
    printf("숫자 10개를 입력해 주십시오.");

    float sum = 0;
    int num[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);

        sum = sum + num[i];
    }

    printf("%.0f\n", sum);
    printf("%f", sum / 10);

    return 0;
}