#include <stdio.h>

int main()
{
    //5개의 정수를 입력 받고, if문을 이용해 7의 배수인 정수가 몇 개 있는지 출력

    int num[5];

    printf("5개의 정수를 입력해 주십시오.");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }
 
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        if (num[i] % 7 == 0 && num[i] != 0)
        {
            count = count + 1;
        }
    }
 
    printf("%d개 입니다", count);

    return 0;
}