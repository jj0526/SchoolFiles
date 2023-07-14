#include <stdio.h>

int main(){
    char string2[100];
    gets(string2);
    char string1[100];

    int size = 100;

    copy(string2, string1, size);

    printf("%s", string1);
}
void copy(char string2[], char string1[], int size){
    for (int i = 0; i<size; i++){
        string1[i] = string2[i];
    }
}