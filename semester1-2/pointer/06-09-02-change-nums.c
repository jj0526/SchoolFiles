#include <stdio.h>

int main(){
    int num1;
    int num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    change_num(&num1, &num2);

    printf("%d %d", num1, num2);

}
void change_num(int *num1, int *num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}