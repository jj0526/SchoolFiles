#include <stdio.h>
#include <stdlib.h>

int main(){
    char str1[100]="ABD";
    char str2[200]="ABEDDD";

    printf("%d\n", strcmp(str1,str2));
    printf("%s\n", strcat(str1,str2));
    printf("%d", strchr(str1,"B"));
}