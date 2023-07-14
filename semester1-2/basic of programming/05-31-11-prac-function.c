#include <stdio.h>

void odd_even (int n);
void main ()
{
    int num;
    printf ("type an integer: ");
    scanf ("%d", &num);
    odd_even (num); 
}
void odd_even (int n) /* function definition */
{
    if (n%2){
        printf("integer is odd");
    }
    else{
        printf("integer is even ");
    }

}