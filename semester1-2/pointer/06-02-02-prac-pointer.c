#include <stdio.h>

int main(){
    int ival, newval;
    int *ptr = &ival;
    *ptr = 300;
    newval = *ptr *27;
    printf("%d %d %d", ival, newval, *ptr);
}