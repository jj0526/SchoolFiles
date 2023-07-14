#include <stdio.h>

int main(){
    char name[10][20] = {"hong gil dong"};

    puts(name);

    printf("%c", name[0][2]);
}