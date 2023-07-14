#include <stdio.h>
#define N 20

int modifyArray( long long sequence[])
{
    for (int i = 0; i <= N - 1; i++)
    {
        sequence[i] = i;
        printf("%lld\n", sequence[i]);
    }

    for (int i = 0; i <= N - 1; i++)
    {
        sequence[i] = i * i * i + 3 * i;
    }

    for (int i = 0; i <= N - 1; i++)
    {
        sequence[i] = sequence[i] * sequence[i] * sequence[i] + 5 * sequence[i];
    }

    for (int i = 0; i <= N - 1; i++)
    {
        printf("%lld\n", sequence[i]);
    }

     long long sum = 0;

    for (int i = 0; i <= N - 1; i++)
    {
        sum = sum + sequence[i];
    }

    return sum;
}

int main()
{
    long long sequence[N];

    printf("%lld", modifyArray(sequence));

    return 0;
}