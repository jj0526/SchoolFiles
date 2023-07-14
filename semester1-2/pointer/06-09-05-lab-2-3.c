#include <stdio.h>

int main(){
    char str[100];

    printf("input a string\n");
    gets(str);

    int len = strlen(str);

    int j = 0;
    char sav[100];
    for (int i = 0; i<len; i++){
        if (((65<=str[i])&&(str[i]<=90))||((97<=str[i])&&(str[i]<=122))){
            sav[j]=str[i];
            j++;
        }
    }
    printf("%s\n", sav);
    int start;
    int many;
    printf("input the start and the length of it : ");
    scanf("%d %d", &start, &many);

    len = strlen(sav);

    char fin[100];
    for (int i=0; i<start; i++){
        
        fin[i] = sav[i];
    }
    for (int i= start+many-1; i<len;i++ ){
        fin[i-many] = sav[i];
    }
    printf("%s", fin);
}