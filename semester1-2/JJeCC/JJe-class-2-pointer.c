#include <stdio.h>

int main(){
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d %d\n", a, b);

    p_swap(&a, &b);
    printf("%d %d\n", a, b);

    c_swap(a, b);
    printf("%d %d\n", a, b);

    return 0;

}
void p_swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void c_swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}