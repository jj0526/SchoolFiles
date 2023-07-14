#include <stdio.h>

int main(){
    char alp[20];
    int asc[26]; //

    for (int i = 0; i<26; i++){
        asc[i] = 0;
    }
    printf("Enter any ten alphabets between A to Z. Press enter after each character:");

    for (int i = 0; i<10; i++){
        scanf("%c", &alp[i]);
    }

    for (int i = 0; i<10; i++){
        if((alp[i]>64)&&(alp[i]<91)){// caps
            asc[alp[i]-65]++;
        }
        else if ((alp[i]>96)&&(alp[i]<123)){
            asc[alp[i]-97]++;
        }
    }
    for (int i = 0; i<26; i++){
        if (asc[i]>1){
            printf(" %c", i+97);
        }
    }

    return 0;

}