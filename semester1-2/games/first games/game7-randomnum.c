#include <stdio.h>
#include <stdlib.h>

int main()
{

    // 숫자 1~100중에 2개를 뽑아서 큰 숫자를 내보내는데 상대팀에서도 2개 뽑아서 랜덤

    srand(time(NULL));

    char name[20];

    printf("먼저 닉네임을 입력해 주십시오. type your name.\n");

    scanf("%s", name);

    printf("1-100에서 2개를 숫자를 뽑겠습니다. we're going to pick two numbers with the range 1-100\n");

    int a = 0;

    int b = 0;

    int num1 = (rand() % 100 + 1);

    int num2 = (rand() % 100 + 1);

    if (num1 >= num2)
    {
        a = num1;
    }
    else
    {
        a = num2;
    }

    printf("the number you picked is %d \n", num1);

    usleep(1000000);

    printf("the number you picked is %d \n", num2);

    usleep(1000000);

    int num3 = (rand() % 100 + 1);

    int num4 = (rand() % 100 + 1);

    if (num3 >= num4)
    {
        b = num3;
    }
    else
    {
        b = num4;
    }

    printf("the number the opponent picked is %d!\n", num3);

    usleep(1000000);

    printf("the number the opponent picked is %d!\n", num4);

    usleep(1000000);

    if (a > b)
    {
        printf("%s wins!", name);
    }
    else if (a < b)
    {
        printf("the opponent wins!");
    }
    else
    {
        printf("it's a tie!");
    }

    return 0;

}
