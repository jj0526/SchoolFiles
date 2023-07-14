#include <stdio.h>

int main(){
    char sen[100];
    char new[100];

    printf("문자열을 입력하세요 : ");
    gets(sen);
    int l = strlen(sen);
    int j = 0;

    for (int i = 0; i<l; i++){
        if (((65<=sen[i])&&(sen[i]<=90))||((97<=sen[i])&&(sen[i]<=122))) {
            new[j] = sen[i];
            j++;
        }
    }

    int len2 = strlen(new);

    for (int i = 0; i<len2; i++){
        printf("%c",new[i]);
    }
    printf("\n");

    printf("문자를 뺄 위치 및 개수를 입력하세요 : ");
    int num1;
    int num2;
    scanf("%d%d",&num1, &num2 );
    
    for (int i = 0; i<len2-num1-num2+1; i++){
        new[num1+i-1] = new[num1+num2+i-1]; // num1 = 2 num2 = 1    2,3 -> 
    }
    new[len2-num1-num2+2] = NULL;

    len2 = strlen(new);
    char answer[100];

    int k = 0;

    for (int i = 0; i<len2; i++){
        if (new[i]!=-1){
            answer[k] = new[i];
            k++;
        }
    }
    int len3 = strlen(answer);

    for (int i = 0; i<len3+1; i++){
        printf("%c", answer[i]);
    }

    return 0;    
    
}