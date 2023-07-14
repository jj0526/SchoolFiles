#include <stdio.h>

int main()
{
    /*0이 아닌 정수를 입력 받고, if else 문을 이용하여 입력 받은 정수가 홀수, 짝수 중
    어떤 것인지 판단하여 출력*/

    int num;
    printf("0이 아닌 정수를 입력해 주십시오.\n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        if (num != 0)
        {
            printf("짝수입니다.");
        }
        else
        {
            printf("0이 아닌 정수를 다시 입력해 주십시오.");
        }
    }
    else if (num % 2 == 1)
    {
        printf("홀수입니다.");
    }
    else
    {
        printf("0이 아닌 정수를 다시 입력해 주십시오.");
    }

    return 0;
}