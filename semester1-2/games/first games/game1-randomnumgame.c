#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    //랜덤 함수를 이용하여 먼저 숫자가 나오는 사람이 이기는 게임.

    srand(time(NULL));

    int a;
    int b;
    int i = 0;

    char P[20];
    char Q[20];

    printf("What's your name?(Player A)\n");
    gets(P);
    printf("What's your name?(Player B)\n");
    gets(Q);

    printf("choose a number (1-1000), %s\n", P);
    scanf("%d", &a);
    printf("choose a number (1-1000), %s\n", Q);
    scanf("%d", &b);

    while (1)
    {
        i++;

        int t = rand() % 1000 + 1;
        printf("%dth game : %d\n", i, t);
        if (a == t)
        {
            printf("%s won!\n",P);
            break;
        }
        else if (b == t)
        {
            printf("%s won!\n", Q);
            break;
        }

        usleep(2000);
    }
    return 0;
}