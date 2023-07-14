#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
int in(){

    int j;
    int k;
    char a[5];
    char b[j];
    
    

    for (int i = 0; i<j; i++)
    {
        if (a[i]=a[j])
        {
            i = j;
            break;
        }
        else
        {
            printf("다시 입력해 주십시오. ");
            return 0;
        }
    }
    

}
*/

int main()
{
    srand(time(NULL));

    int n = 0; // 사람이 이긴 횟수
    int m = 0; // 컴퓨터가 이긴 횟수
    int k;     // j의 번째수
    int p;
    int x;
    int y;
    int z;
    int c[10]; // 컴퓨터가 낸 것 숫자로 저장
    int a[10]; // 사람이 낸 것  숫자로 저장

    char input[10]; // 사람이 낸 것
    char b[10][10];  // 컴퓨터가 낸 것 숫자로 저장
    char name[20];  // 닉네임

    //  x   y
    char rock[5][10] = {"주먹", "묵", "rock"};
    char paper[5][10] = {"보자기", "빠", "paper"};
    char scissors[5][10] = {"가위", "찌", "scissors"};

    printf("가위 바위 보를 시작합니다! we're starting rock-paper-scissors game!\n");

    printf("3선승제입니다! you win if you win 3 times first!\n");

    printf("먼저 닉네임을 입력해 주십시오. type your name.\n");

    scanf("%s", name);

    while(1)
    {

        printf("무엇을 내시겠습니까? pick rock, paper or scissors.\n"); //사람이 먼저 내기

        scanf("%s", &input);

        a[i] = -1;

        for (int x = 0; x < 5; x++)
        {

            if (strcmp(input, rock[x]) == 0)
            {
                a[i] = 0;
                k = x;
            }
            else if (strcmp(input, paper[x]) == 0)
            {
                a[i] = 1;
                k = x;
            }
            else if (strcmp(input, scissors[x]) == 0)
            {
                a[i] = 2;
                k = x;
            }
        }
        if (a[i] == -1)
        {
            return 0;
        }

        printf("%s : %s\n", name, input);

        p = rand() % 3 + 1; // 컴퓨터 차례

        if (p == 1)
        {
            strcpy(b[i], rock[k]);
            c[i] = 0;
        }
        else if (p == 2)
        {
            strcpy(b[i], paper[k]);
            c[i] = 1;
        }
        else if (p == 3)
        {
            strcpy(b[i], scissors[k]);
            c[i] = 2;
        }

        printf("the opponent : %s\n", b[i]);

        if (a[i] == c[i])
        {
            printf("비겼습니다! it's a tie!\n");
        }
        else if (a[i] != c[i])
        {
            if (a[i] == 0)
            {
                if (c[i] == 1)
                {
                    printf("졌습니다! you lose!\n");
                    m = m + 1;
                }
                else if (c[i] == 2)
                {
                    printf("이겼습니다! you win!\n");
                    n = n + 1;
                }
            }

            else if (a[i] == 1)
            {
                if (c[i] == 0)
                {
                    printf("이겼습니다! you win!\n");
                    n = n + 1;
                }
                else if (c[i] == 2)
                {
                    printf("졌습니다! you lose!\n");

                    m = m + 1;
                }
            }
            else if (a[i] == 2)
            {
                if (c[i] == 0)
                {
                    printf("졌습니다! you lose!\n");
                    m = m + 1;
                }
                else if (c[i] == 1)
                {
                    printf("이겼습니다! you win!\n");
                    n = n + 1;
                }
            }
        }

        printf(" you won : %d times,    the opponent won: %d times\n\n", n, m);

        if (m == 3 || n == 3)
        {
            break;
        }
    }

    if (m == 3)
    {
        printf("you lost!\n");
    }
    else if (n == 3)
    {
        printf("you win!\n");
    }
    else if (n == 2 && m == 2)
    {
        printf("다시 플레이 해주십시오. play again.");
    }
    return 0;
}