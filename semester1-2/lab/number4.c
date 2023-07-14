#include <stdio.h>

int main()
{
    int length;
    int width;

    printf("type the length : ");
    scanf("%d", &length);

    printf("type the width : ");
    scanf("%d", &width);

    if ((length > 0) && (width > 0))
    {
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < width; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        printf("type the numbers again");
    }
    return 0;
}