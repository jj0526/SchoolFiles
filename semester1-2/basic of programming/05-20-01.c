#include <stdio.h>

int n1,n2; // global

int main(){


    scanf("%d %d", &n1, &n2);

    exchange(); // you don't have to put n1 or n2 if they're global

    printf("%d %d", n1, n2);

    return 0;
    

}

int exchange(){
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;

    return 0;
}