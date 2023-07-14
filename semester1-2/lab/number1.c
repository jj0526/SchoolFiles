#include <stdio.h>

int main()
{
    char g; // m or f
    int age;
    float height;
    float weight;
    float BMI = 0;

    printf("input your age\n");
    scanf("%d", &age);

    printf("what's your gender? m or M for Male, f or F for female\n");
    scanf(" %c", &g);

    printf("what's your weight in kg?\n");
    scanf("%f", &weight);

    printf("what's your height in cm?\n");
    scanf("%f", &height);

    if ((weight > 0) && (height > 0) && (age > 0))
    {
        if ((g == 'f') || (g == 'F'))
        {
            printf("you're %d years old, your gender is female, your weight is %.2fkg, and you're height is %.2fcm.", age, weight, height);
            height = height / 100;
            BMI = (weight / (height * height)) * 0.9 + 8.0;
            printf("your BMI is %.2f", BMI);
        }
        else if (g == 'm' || g == 'M')
        {
            printf("you're %d years old, your gender is male, your weight is %.2fkg, and you're height is %.2fcm.", age, weight, height);
            height = height / 100;
            BMI = weight / (height * height);
            printf("your BMI is %.2f", BMI);
        }
        else
        {
            printf("type the gender again");
        }
    }
    else
    {
        printf("check the numbers and the gender again.");
    }
    return 0;
}