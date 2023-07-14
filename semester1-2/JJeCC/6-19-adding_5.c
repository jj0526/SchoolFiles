#include <stdio.h>

void adding_five(int *a);
int main(){
    int a;
    scanf("%d", &a);
    adding_five(&a);
    printf("%d", a);

    return 0;
}

void adding_five(int *a){
    *a = *a + 5;
}