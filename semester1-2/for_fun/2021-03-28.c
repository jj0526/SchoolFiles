#include <stdio.h>

int main()
{
    int num1;
    float temperature; 
    char c;
    char favorite_food[10];


    printf("좋아하는 숫자를 입력해 주세요");
    scanf("%d", &num1);
    printf("your favorite number is %d\n",num1);
    
    printf("현재 체온을 입력해주세요:");
    scanf("%f", &temperature);
    printf("your body temperature is %f\n",temperature);
    
    printf("혈액형을 입력해주세요");
    scanf(" %c", &c);
    printf("your blood type is %c\n", c);

    
    printf("좋아하는 음식을 입력해주세요: ");
    scanf("%s", favorite_food);
    printf("your favorite food is %s\n",favorite_food);

    return 0; 
}