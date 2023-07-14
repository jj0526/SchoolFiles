#include <stdio.h>

int main()
{
    float F, C;
    int FC;

    printf("C -> F : 1   F -> C :2\n");
    scanf("%d", &FC);

    printf("type a number");
    if (FC == 1)
    {
        scanf("%f", &C);
    }
    else if (FC == 2)
    {
        scanf("%f", &F);
    }
    else
    {
        printf("type again");
        return 0;
    }

    switch (FC)
    {
    case 1:

        F = C * 9.0 / 5.0 + 32;
        printf("%f", F);
        break;

    case 2:

        C = (F - 32.0) * 5.0 / 9.0;
        printf("%f", C);
        break;
    }

    return 0;
}