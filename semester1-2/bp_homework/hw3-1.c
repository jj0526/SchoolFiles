#include <stdio.h>

int main(){

    printf("Input a word 1\n");
    char word1[100];
    scanf("%s", word1);

    int size1 = 0;
    for (int i = 0; i<100; i++){
        size1++;
        if (word1[i]=='\0'){
            break;
        }
    }

    printf("Input a word 2\n");
    char word2[100];
    scanf("%s", word2);

    int size2 = 0;
    for (int i = 0; i<100; i++){
        size2++;
        if (word2[i]=='\0'){
            break;
        }
    }

    if (size1 == size2){

        int answer = anagram(word1, word2, size1);
        if (answer == 1){
            printf("They're anagrams.");
        }
        else{
            printf("They're not anagrams");
        }
    }
    else{
        printf("They are not anagrams");
    }

    return 0;
}

int anagram(char *word1, char *word2, int size){

    for (int i = 0; i<size; i++){
        word1[i] = toupper(word1[i]);
    }

    for (int i = 0; i<size; i++){
        word2[i] = toupper(word2[i]);
    }

    int ascii1[50];

    for (int i =0; i<50; i++){
        ascii1[i] = 0;
    }
    int ascii2[50];
    for (int i = 0; i<50; i++){
        ascii2[i] = 0;
    }

    for (int i = 0; i<size; i++){
        for (int j = 0; j<26; j++){
            if((int)word1[i] == 65+j)
            {
                ascii1[j]++;
            }
        }
    }
    for (int i = 0; i<size; i++){
        for (int j = 0; j<26; j++){
            if((int)word2[i] == 65+j)
            {
                ascii2[j]++;
            }
        }
    }

    int count=0;
    for (int i = 0; i<26; i++){
        if (ascii1[i] == ascii2[i]){
            count++;
        }
    }
    if (count == 26){
        return 1;
    }
    else{
        return 0;
    }
}