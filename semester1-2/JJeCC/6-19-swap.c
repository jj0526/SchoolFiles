#include <stdio.h>

int main(){
    int *int_a;
    int *int_b;
    scanf~~~~
    int_swap(&int_a, &int_b);

    char *char_a;
    char *char_b;
    char_swap(&char_a, &char_b);

    float *float_a;
    float *float_b;
    float_swap(&float_a, &float_b)
}
void int_swap(int *int_a, int *int_b){
    int temp = *int_a;
    *int_a = *int_b;
    *int_b = temp;
}
void char_swap(char *char_a, char *char_b){
    char temp = *char_a;
    *char_a = *char_b;
    *char_b = temp;
}
void float_swap(float *float_a, float *float_b){
    float temp = *float_a;
    *float_a = *float_b;
    *float_b = temp;
}