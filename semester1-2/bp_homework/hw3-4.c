#include <stdio.h>

int main(){
    int str1[20];
    int str2[20];

    printf("Enter first set\n");
    for (int i = 0; i<10; i++){
        scanf("%d", &str1[i]);
    }
    printf("\nEnter Second set\n");
    for (int i = 0 ; i<10; i++){
        scanf("%d", &str2[i]);
    }

    int same[20];
    int count = 0;

    for (int i = 0; i<10; i++){
        for (int j = 0; j<10; j++){
            if (str1[i] == str2[j]){
                same[count] = str1[i];
                count++;
            }
        }
    }

    for (int i = 0; i<count; i++){
        printf("%d ",same[i]);
    }

    return 0;
    
}