#include <stdio.h>
void main(){
    int a[10] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    int hold; // for swapping values
    int i, current, start, k; //counters
    printf("Data items in original order\n");
    for (i = 0; i < 10; ++i ) printf("%4d", a[ i ]);
    // selection sort
    for (start = 0; start < 10; start++) {
        int smallest = start; // smallest is the index
        for (current = start + 1; current < 10; current++) {
        if (a[current] < a[smallest]) smallest = current;
    }
    // Swap the elements
    hold = a[start];
    a[start] = a[smallest];
    a[smallest] = hold;
    }
    printf("\nData items in ascending order\n");
    for ( k = 0; k < 10; ++k ) printf("%4d", a[ k ]);
}