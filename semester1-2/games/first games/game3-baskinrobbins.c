#include <stdio.h>
#include <math.h>
#include <string.h>
// 배스킨라빈스 31

int main()
{
    srand(time(NULL));

    printf("배스킨 라빈스 게임을 시작합니다!\n");
    printf("먼저 31을 말하는 사람이 지는 게임입니다.\n");

    int n;           // 말하는 숫자 개수
    int num = 0;     //현재까지 말하는 숫자
    int c;           // 컴퓨터가 말한 숫자
    char winner[20]; //이긴사람

    int answer = 31; // 정답

    printf("닉네임을 입력해 주십시오");
    scanf("%s", winner);

    printf("먼저 시작하고 싶다면 1~3 중 하나를, 아니면 0을 입력해 주십시오.");
    scanf("%d", &n);

    if (n > 0 && n <= 3)
    {
        printf("you start first!\n"); //사람이 먼저 시작할 때

        while (answer != num)
        {

            scanf("%d", &n); //인간 먼저 - 인간

            for (int i = 0; i < n; i++)
            {
                num = num + 1;
            }

            usleep(200000);

            if (n == 1)
            {
                printf("you : %d\n", num);
            }

            else if (n == 2)
            {
                printf("you : %d,%d\n", num - 1, num);
            }

            else if (n == 3)
            {
                printf("you : %d,%d,%d\n", num - 2, num - 1, num);
            }

            if (num == 31)
            {
                printf("the opponent wins!");
                return 0;
            }

            c = (rand() % 3 + 1); // 인간 먼저 , 컴퓨터

            if (num == 30)
            {
                c = 1;
                num = num + 1;
            }
            else if (num != 30)
            {
                if (num == 27)
                {
                    c = 3;
                }

                if (num == 28)
                {
                    c = 2;
                }
                if (num == 29)
                {
                    c = 1;
                }
                if (num == 30)
                {
                    c = 1;
                }

                for (int i = 0; i < c; i++)
                {
                    num = num + 1;
                }
            }

            usleep(700000);

            if (c == 1)
            {
                printf("the opponent : %d\n", num);
            }

            else if (c == 2)
            {
                printf("the opponent : %d,%d\n", num - 1, num);
            }
            else if (c == 3)
            {
                printf("the opponent : %d,%d,%d\n", num - 2, num - 1, num);
            }
        }
        if (num == 31)
        {
            printf("%s wins!", winner);
            return 0;
        }
    }

    else if (n == 0)
    {
        printf("computer starts first!\n"); // 컴퓨터가 먼저 시작할때

        while (answer != num)
        {
            c = (rand() % 3 + 1); // 컴퓨터 먼저, 컴퓨터

            if (num == 30)
            {
                c = 1;
                num = num + 1;
            }
            else if (num != 30)
            {
                if (num == 27)
                {
                    c = 3;
                }

                else if (num == 28)
                {
                    c = 2;
                }
                if (num == 29)
                {
                    c = 1;
                }

                for (int i = 0; i < c; i++)
                {
                    num = num + 1;
                }
            }

            usleep(700000);

            if (c == 1)
            {
                printf("the opponent : %d\n", num);
            }

            else if (c == 2)
            {
                printf("the opponent : %d,%d\n", num - 1, num);
            }
            else if (c == 3)
            {
                printf("the opponent : %d,%d,%d\n", num - 2, num - 1, num);
            }

            if (num == 31)
            {
                printf("%s wins!", winner);
                return 0;
            }

            scanf("%d", &n); //컴퓨터 먼저 인간

            usleep(200000);

            for (int i = 0; i < n; i++)
            {
                num = num + 1;
            }

            if (n == 1)
            {
                printf("you : %d\n", num);
            }

            else if (n == 2)
            {
                printf("you : %d,%d\n", num - 1, num);
            }

            else if (n == 3)
            {
                printf("you : %d,%d,%d\n", num - 2, num - 1, num);
            }

            if (num == 31)
            {
                printf("the opponent wins!");
                return 0;
            }
        }
    }
    return 0;
}