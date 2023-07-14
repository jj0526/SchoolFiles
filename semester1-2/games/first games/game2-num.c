#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

// 숫자 야구 게임

int main()
{
    srand(time(NULL));

    int j; // j는 자릿수

    int n = 0; // n은 입력 받은 수

    int strike = 0; //strike는 스트라이크 개수

    int ball = 0; // ball은 볼 개수

    int count = 0; // 횟수

    int *l ; // 포인터

    l = &j;

    printf("몇 자리 수의 숫자 야구 게임을 플레이 하시겠습니까? 게임을 시작하려면 2 이상, 10 이하의 숫자를 입력해 주십시오. ");

    scanf("%d", l);

    int num[j+1];
    
    // int num[10]; //나중에 동적 할당 배우면 바꾸기!

    if (j > 1)
    {
        num[0] = (rand() % 9 + 1);

        for (int i = 1; i < j; i++)
        {
            num[i] = (rand() % 10);

            for (int k = 0; k < i; k++)
            {

                while (num[i] == num[k])
                {
                    num[i] = (rand() % 10);
                }
            }
        }

        //while (n != m)

        int t[10]; //t는 입력받은 수 하나하나 쪼개서.

        while (strike != j)
        {
            count = count + 1;
            strike = 0;
            ball = 0;
            printf("숫자를 입력해 주십시오.");
            scanf("%d", &n);

            for (int i = 0; i < j; i++) // 중요함!!!
            {
                t[j - i - 1] = n % 10; // n=123    t[2] = 3, t[1] = 2
                n = n / 10;            // n = 123
            }

            for (int i = 0; i < j; i++)
            {
                if (num[i] == t[i])
                {
                    strike = strike + 1;
                }
                else
                {
                    for (int k = 0; k < j; k++)
                    {
                        if (num[i] == t[k])
                        {
                            ball = ball + 1;
                        }
                    }
                }
            }

            printf("strike : %d, ball : %d\n", strike, ball);
        }

        if (strike == j)
        {
            printf(" you win! ");
            printf("시도 횟수는 %d회 입니다.", count);
        }
    }

    else
    {
        printf("2 이상, 10이하의 숫자를 다시 입력해 주십시오.");
        return 0;
    }

    return 0;
}