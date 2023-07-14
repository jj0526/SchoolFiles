#include <stdio.h>

int main()
{
    //임의의 정수 2개를 입력 받아 그 사이 숫자들의 합을 구하는 프로그램을 작성하세요.
    int a;
    int b;
    int sum = 0;

    printf("두 개의 수를 입력해 주십시오.");
    scanf("%d",&a);
    scanf("%d",&b);

    if ( a > b )
    {
        for (int i=b+1; i<a; i++ )
        {
            sum = sum + i;
        }
    }
    if ( b > a )
    {
        int c;
        c = a ;
        a = b;
        b = c;
    }
        for (int i=b+1; i<a; i++ )
        {
            sum = sum + i;
        }

    if ( a == b )
    {
        printf(" 서로 다른 숫자를 입력해 주십시오.");
    }

    printf("%d",sum);


}