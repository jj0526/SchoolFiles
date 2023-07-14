#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    srand(time(NULL));

    int answer;
    int a;           // range

    printf("Let's start Up and Down game!\n");
    printf("select the range!");
    scanf("%d",&a);

    int b[100];

    answer = (rand() % a + 1);

    printf("the range is 1 to %d\n", a );

    int i = 0;

    b[0] = 0;

    while (b[i]!=answer)
    {
        
        printf("what number do you think is the answer?\n");

        scanf("%d", &b[i]);

        printf("the number you typed is %d\n", b[i]);

        if (answer > b[i])
        {
            printf("★ UP ★!\n");
        }
        else if (answer < b[i])
        {
            printf("★ DOWN! ★\n");
        }
        else
        {
            break;
        }

        i++;
    }
    printf("you tried %d times!\n", i+1);

    printf("the numbers you've typed are ");

    int j;

    for (int j =0; j<i; j++)
    {
        printf("%d,", b[j]);
    }
    printf("%d",b[i]);             // why b[j] is not working cus of int j i think

    return 0;

}