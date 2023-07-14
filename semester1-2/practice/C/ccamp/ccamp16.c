#include <stdio.h>

int main()
{
    char blood[5];

    printf("혈액형을 대문자로 입력해 주십시오.");

    scanf("%s", blood);

    if (blood[0] == 'A' && blood[1] == 'B' && blood[2] == '\0' && blood[3] == '\0' && blood[4] == '\0')
    {
        printf("AB형입니다.");
    }
    else if (blood[0] == 'A' && blood[1] == '\0' && blood[2] == '\0' && blood[3] == '\0' && blood[4] == '\0')
    {
        printf("A형입니다.");
    }
    else if (blood[0] == 'B' && blood[1] == '\0' && blood[2] == '\0' && blood[3] == '\0' && blood[4] == '\0')
    {
        printf("B형입니다.");
    }
    else if (blood[0] == 'O' && blood[1] == '\0' && blood[2] == '\0' && blood[3] == '\0' && blood[4] == '\0')
    {
        printf("O형입니다.");
    }
    else
    {
        printf("다시 입력하여 주십시오.");
    }
    return 0;
}