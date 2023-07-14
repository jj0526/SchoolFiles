#include <stdio.h>

int main(){
    char string[100];
    char reversed[100];

    gets(string);

    int count = 0;

    for (int i = 0; i<100; i++){
        if (string[i]!=NULL){
            count++;
        }
        else{
            break;
        }
    }
    int size = count + 1; // including NULL

    reverse_char(string, reversed, size);

    /*for (int i = 0; i<size; i++){
        printf("%c", reversed[i]);
    }*/
    printf("%s\n", reversed);
    puts(reversed);

}
void reverse_char(char string[], char reversed[], int size){
    for (int i = 0; i<size-1; i++){
        reversed[size-i-2] = string[i]; // when size = 5 string[4] == NULL; reveresed[5-i-2] = string[i]
    }
    reversed[size-1] = NULL;
}