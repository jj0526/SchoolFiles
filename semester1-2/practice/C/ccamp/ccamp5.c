#include <stdio.h>

int main()
{
    int num ;
    int sum = 0;

    printf("숫자를 입력해 주십시오. 0 이하의 프로그램 입력하면 종료");
    
    while ( 1 )
    {
        scanf("%d", &num);

        sum = sum + num;

        if ( num <=0 )
        {
            break;
        }

    }

    printf("%d", sum);

    return 0;
    
}