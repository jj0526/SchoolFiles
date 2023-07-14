#include <stdio.h>

int main()
{
    // 임의의 양의 정수 n을 입력 받아 1~100 사이에서 n의 배수와 그 개수를 출력하는 
    // 프로그램을 작성

    int n = 1;
    int count = 0;
    int i = 1;

    printf("숫자를 하나 입력해 주십시오");

    scanf("%d", &n);

    while ( i < 101)

    {   
        if ( i % n == 0)
        {
            printf("%d\n", i);

            count ++;
        }
        i ++;
    }
    printf("%d개 입니다", count);

}