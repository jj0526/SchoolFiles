#include <stdio.h>

int main(){
    char *ptr, string[20] = "programming";
    ptr = string; //ptr is refering to string[0] 
    ptr = ptr+3;
    *ptr = 'k';

    printf("%c %s", *ptr, string);
}