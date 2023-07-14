#include <stdio.h>

int main()
{
    // 임의의 양의 정수 n을 입력 받아 1~100 사이에서 n의 배수와 그 개수를 출력하는 
    // 프로그램을 작성

    int n = 1;
    int count = 0;

    printf("숫자를 하나 입력해 주십시오");

    scanf("%d", &n);

    for (int i=1; i<101; i++ )
    {
        if ( i % n == 0)
        {
            printf("%d\n", i);
            count = count + 1 ;

        }
    }
    printf("%d개 입니다", count);

}