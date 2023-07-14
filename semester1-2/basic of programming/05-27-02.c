#include <stdio.h>

int main()
{
    char FC;
    printf("C? F?");
    scanf("%c", &FC);

    tempConvert(FC);
    
    return 0;

}

void tempConvert(char FC)
{

    float temp;

    if (FC == "C")
    {
        printf("how hot is it?");
        scanf("%f", &temp);
        temp = (temp - 32) * 5 / 9;
        printf("%f", temp);
    }
    else if (FC == "F")
    {
        printf("how hot is it?");
        scanf("%f", &temp);
        temp = temp * 9 / 5 + 32;
        printf("%f", temp);
    }
    else
    {
        printf("error!");
    }
}