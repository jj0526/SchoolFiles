#include <stdio.h>

int main(){
    int age[20];
    int old;
    int cases = 0;
    int plays = 0;

    while (1){
        printf("Test case %d\n", cases+1 );
        printf("Type 10 students' age\n");
        for (int i = 0; i<10; i++){
            scanf("%d", &age[i]);
        }
        old = age[0];
        for (int i = 0; i<10; i++){
            if (old<age[i]){
                old = age[i];
            }
        }
        int count = 0;
        for (int i = 0; i<10; i++){
            if (old == age[i]){
                count++;
            }
        }
        printf("There are %d number of oldest student in a group\n", count);
        cases ++;
        plays++;

        if (plays == 3){
            return 0;
        }

    }

    return 0;

}