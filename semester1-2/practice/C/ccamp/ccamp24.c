#include <stdio.h>
#include <string.h>

int main()
{

    char str[80] = "abcd12345678";
    char str2[80] = { 0 };

    char *p = NULL;
    //char p[20] = { 0 };

    //strcpy(str2, str + 5);
    //strncpy(str2, str+3, 5);

    //q = strchr(str,'c');
    p = strchr(str,'c');
    strcpy(str2,p+1);
    //strcpy(str2, &(p + 1));

    printf("%s\n", str2);
}