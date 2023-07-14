#include <stdio.h>
#include <string.h>

int main(){
    char str[81];
    strcpy(str,"these ");
    strcat(str,"strings ");
    strcat(str,"are ");
    strcat(str,"concatenated.");
    puts(str);
    printf("\nstr has %d chars",strlen(str));
}