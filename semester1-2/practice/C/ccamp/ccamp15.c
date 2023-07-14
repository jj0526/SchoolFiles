#include <stdio.h>
#include <string.h>


int main (){
    
    char blood[5];

    printf("혈액형을 대문자로 입력해 주십시오.\n");
    scanf("%s", blood);

    if (blood[0]=='A')
    {
        if ( blood[1] == 'B')
        {
            if (blood[2] == '\0' )
            {
                printf("AB형입니다.");
            }
            else
            {
                printf("다시 입력해 주십시오");
            }
        }
        else if ( blood[1] == '\0')
        {
            printf("A형입니다.");
        }
        else 
        {
            printf("다시 입력해 주십시오.");
        }
        
    }
    else if (blood[0]=='B') 
    {
        if (blood[1]=='\0')
        {
            printf("B형입니다.");
        }
        else
        {
            printf("다시 입력해 주십시오.");
        }
    }

    else if (blood[0]=='O')
    {
        if (blood[1]=='\0')
        {
            printf("O형입니다.");
        }
        else 
        {
            printf("다시 입력해 주십시오.");
        }
    } 
    else
    {
        printf("다시 입력해 주십시오.");
    }

    return 0;

}