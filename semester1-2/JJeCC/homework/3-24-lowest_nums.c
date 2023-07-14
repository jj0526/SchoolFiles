#include <stdio.h>

int main(){

    long num[5];

    long order[5];

    long min;

    long max;

    long sum=0;

    scanf("%d%d%d%d%d",&num[0],&num[1],&num[2],&num[3],&num[4]);
    
    min = num[0];

    for (int i = 0; i<5; i++)
    {
        if (min<=num[i])
        {
            min = min;
        }
        else if (min>num[i])
        {
            min = num[i];
        }

    }

    max = num[0];

    for (int i = 0; i<5; i++)
    {
        if (max>=num[i])
        {
            max = max;
        }
        else if (max<num[i])
        {
            max = num[i];
        }

    }

    for (int i=0; i<5; i++)
    {
        sum = sum + num[i];
    }

    printf("%ld %ld",sum-max,sum-min);

    return 0;

}