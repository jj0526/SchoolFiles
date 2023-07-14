#include <stdio.h>
#include <string.h>

int main()
{
    printf("배스킨라빈스31 게임을 시작합니다! we're going to play baskin-robbins 31!\n");

    int num;       // 현재까지 진행된 숫자
    int n;         // 사람이 말한 숫자
    int c;         // 컴퓨터가 말한 숫자
    int turn;      // 현재까지 진행한 턴
    char name[20]; // 닉네임

    printf("닉네임을 입력해 주십시오. type your name here\n");

    scanf("%s", name);

    printf("상대가 먼저 시작합니다! the opponent is starting first! \n");

    while (num != 30)
    {
        turn = 1;

        if (turn == 1)
        {
            c = 2;

            num = num + c;

            usleep(700000);

            printf("the opponent : %d, %d \n ", num - 1, num);
        }

        for (int i = 0; i < 9; turn++)
        {
            scanf("%d", &n);

            num = num + n;

            turn++;

            usleep(100000);

            if (n == 1)
            {
                printf("%s : %d\n", name, num);
            }
            else if (n == 2)
            {
                printf("%s : %d, %d\n", name, num - 1, num);
            }
            else if (n == 3)
            {
                printf("%s : %d, %d, %d \n", name, num - 2, num - 1, num);
            }

            if (num == 31)
            {
                printf("you lost!\n");
                return 0;
            }

            c = 4 - n;

            turn++;

            num = num + c;

            usleep(700000);

            if (c == 1)
            {
                printf("the opponent : %d\n", num);
            }
            else if (c == 2)
            {
                printf("the opponent : %d, %d\n", num - 1, num);
            }
            else if (c == 3)
            {
                printf("the opponent : %d, %d, %d \n", num - 2, num - 1, num);
            }
        }
    }
    return 0;
}