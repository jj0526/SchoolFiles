#include <stdio.h>

int main()
{
    int age[5];

    printf("나이 5개를 입력해주십시오");


    for ( int i = 0; i <5; i++)
    {
        scanf("%d", &age[i]);

    }

    for ( int i = 0; i<5; i++)
    {
        if (20 <= age[i] && age[i] < 30)      
        {
            printf("%d\n", age[i]);
    }   }
    
    return 0;
}