#include <stdio.h>

int main()
{
    int num = 1;
    int sum = 0;

    printf("숫자를 입력해 주십시오. 0 이하의 프로그램 입력하면 종료");
    
    while ( num > 0 )
    {
        scanf("%d", &num);

        sum = sum + num;

    }

    printf("%d", sum);

    return 0;
    
}