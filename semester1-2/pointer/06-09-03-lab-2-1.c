#include <stdio.h>

int main(){
    int age[10];

    printf("Type 10 students' age\n");
    for (int i = 0; i<10; i++){
        scanf("%d", &age[i]);
    }
    int max = age[0];
    for (int i = 0; i<10; i++){
        if (max<age[i]){
            max = age[i];
        }
    }
    int count = 0;
    for (int i = 0; i<10; i++){
        if (max==age[i]){
            count++;
        }
    }
    printf("There are %d number of oldest student in a group.\n", count);
}