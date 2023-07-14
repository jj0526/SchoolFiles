#include <stdio.h>

int main()
{
    //구구단 중 짝수 단만 출력 "continue"사용하기

    for ( int i = 0; i < 9; i++)
    {
        if ((i+1) % 2 != 0)
            continue;
        {
            for ( int a = 0; a<9; a++)
            {
                printf("%d × %d\n",i+1,a+1);

            }
        }
    }

    return 0;


}