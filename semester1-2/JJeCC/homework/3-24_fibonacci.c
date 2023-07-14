#include <stdio.h>

int main(){
    //fibonacci
    
    int num;
    int first = 1;
    int second = 1;
    int third;
    int n;

    printf("몇번째? ");
    scanf("%d",&num);

    if (num == 1)
    {
        printf("%d",first);
    }
    else if (num == 2)
    {
        printf("%d",second);
    }
    else if (num >2)
    {

        for (int i = 0; i<num-2; i++)
        {
            third = first + second;
            second = first;
            first = third;
        }
        printf("%d", third);
    }

}