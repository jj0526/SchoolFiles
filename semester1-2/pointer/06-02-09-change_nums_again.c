#include <stdio.h>

int main(){

    int n1;
    int n2;
    scanf("%d", &n1);
    scanf("%d", &n2);

    exchange(&n1, &n2);

    printf("%d %d", n1, n2);

}
int exchange(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2; 
    *n2 = temp;
}