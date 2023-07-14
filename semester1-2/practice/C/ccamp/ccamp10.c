#include <stdio.h>

int main()
{
    // 임의의 정수 10개를 입력 받아 최댓값, 최솟값, 평균값을 출력하는 프로그램을 작성

    int num[10];

    int max;

    int min;

    double nor = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }

    max = num[0];

    for (int i = 0; i < 10; i++)
    {
        if (max < num[i])
        {
            max = num[i];
        }
    }

    min = num[0];

    for (int i = 0; i < 10; i++)
    {
        if (min > num[i])
        {
            min = num[i];
        }
    }

    for (int i = 0; i < 10; i++)
    {
        nor = nor + num[i];
    }

    printf("최댓값은 %d입니다.\n", max);
    printf("최솟값은 %d입니다.\n", min);
    printf("평균은 %.1lf입니다.\n", nor / 10.0);

    return 0;
}