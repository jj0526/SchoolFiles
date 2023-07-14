#include <stdio.h>

int main(){
    char a[30];
    gets(a);

    int size = strlen(a);
    char b[size];

    rev(a, b, size);

    printf("%s", b);
}

void rev(char a[], char b[], int size){
    for (int i = 0;i<size; i++){
        b[i] = a[size-i-1];
    }
    b[size] = NULL;
}