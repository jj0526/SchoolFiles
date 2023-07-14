#include <Stdio.h>

int CAL (int n)
{
    long fact = 1;
    int i;
    for (i=1; i<=n; i++) //팩토리얼 연산문 중요해!! 
        fact=fact*i;
    return fact;

}

int main()
{
    int num1;
    long result;
    printf("자연수를 하나 입력해주세요\n");
    scanf("%d",&num1);
    result = CAL(num1);
    printf("%d!은 %d입니다",num1,result);

}