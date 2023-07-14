#include <stdio.h>

int main()
{

    int sales[100];
    float cms[100];
    int section[10];

    for (int i = 0; i < 10; i++)
    {
        section[i] = 0;
    }

    int i = 0;
    while (1)
    {
        printf("Enter employee gross sales < -1 to end >\n");
        scanf("%d", &sales[i]);
        if (sales[i] > 0)
        {
            cms[i] = sales[i] * 0.06;
            printf("Employee commission is $%.2f\n", cms[i]);
        }
        else
        {
            break;
        }
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        if (((int)cms[j] / 120) < 8)
        {
            if ((int)cms[j] % 120 == 0)
            {
                section[(int)cms[j] / 120 - 1]++;
            }
            else
            {
                section[(int)cms[j] / 120]++;
            }
        }
        else
        {
            section[8]++;
        }
    }
    printf("Employees in the range:\n");
    printf("$0 to $120 : %d\n", section[0]);
    printf("$121 to $240 : %d\n", section[1]);
    printf("$241 to $360 : %d\n", section[2]);
    printf("$361 to $480 : %d\n", section[3]);
    printf("$481 to $600 : %d\n", section[4]);
    printf("$601 to $720 : %d\n", section[5]);
    printf("$721 to $840 : %d\n", section[6]);
    printf("$841 to $960 : %d\n", section[7]);
    printf("Above $960 : %d\n", section[8]);

    return 0;
}