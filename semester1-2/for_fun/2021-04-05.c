#include <stdio.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));

    int t = rand() % 254+1;

    printf("%d",t);

}