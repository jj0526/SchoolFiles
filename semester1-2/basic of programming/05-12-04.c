#include <stdio.h>

int main(){
    char line[81];

    scanf("%s", &line[0]); // == scanf("%s", line)

    printf("%s", line);

    return 0;
}