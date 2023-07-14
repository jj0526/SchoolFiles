#include <stdio.h>
#include <string.h>
void main () {
    char str[81];
    strcpy (str,"these ");
    strcat (str,"strings ");
    strcat (str,"are ");
    strcat (str,"concatenated.");
    puts (str);
    printf ("\nstr has %d characters\n", strlen (str));
    printf("%s", str);
}