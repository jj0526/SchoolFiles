#include <stdio.h>

int main(){
    char alp[10];
    for (int i = 0; i<10; i++){
        scanf(" %c", &alp[i]);
    }
    int real[26];//65-90
    for (int i = 0; i<26; i++){
        real[i] = 0; 
    }

    for (int i=0; i<10; i++){
        real[alp[i]-65]++;
    }
    for (int i = 0; i<26; i++){
        if (real[i]>1){
            printf("%c", i+65);
        }
    }
    return 0;
}