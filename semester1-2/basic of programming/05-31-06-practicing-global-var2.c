#include <stdio.h>
int num_switch();
int num1;
int num2;
int main(){

    scanf("%d %d", &num1, &num2);

    num_switch();

    printf("%d %d", num1, num2);
}
int num_switch(){
    
    int temp=num1;
    num1=num2;
    num2=temp;
}