#include <stdio.h>

int main(){
    char ori[100];
    gets(ori);

    char rev[100];
    int size = rev;

    reverse(ori, rev, size);

    printf("%s", rev);
}
void reverse(char ori[], char rev[], int size){
    int len = strlen(ori);

    for (int i = 0; i<len; i++){
        rev[len-i-1] = ori[i];
    }
    rev[len] = NULL;
}