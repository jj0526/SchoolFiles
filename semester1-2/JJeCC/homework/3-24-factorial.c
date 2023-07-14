#include <stdio.h>

int main()
{
    int num;
    int ans = 1;

    printf("input the num");
    scanf("%d", &num);

    for (int i = 1; i<num; i++)
    {
       ans = ans * (i+1);
    }

    printf("factorial of %d is %d",num,ans);

}