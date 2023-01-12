//
// Created by Stefan Andonov on 1/12/23.
// Modify the first task by printing the ration of vowels and consonants
// by every line of the file
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o';
}

int main() {


    //1. open the file
    FILE *fp = fopen("/Users/stefan.a/CLionProjects/SP2022/EN/ex13/input.txt", "r");

    //2. how are we going to read from file? LINE BY LINE
    char line[100];
    int counter = 1;
    while (fgets(line, sizeof(line), fp)!=NULL){
        int vowels = 0, consonants = 0;
        for (int i=0;i<strlen(line);i++){
            if (isalpha(line[i])){
                if (isVowel(line[i])){
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }
        printf("%d. Ratio vowels/consonats: %d/%d = %.2f\n", counter, vowels, consonants, (float) vowels/consonants);
        ++counter;
    }


        fclose(fp);

//    printf("Ratio vowels/consonats: %d/%d = %.2f", vowels, consonants, (float) vowels/consonants);
    return 0;
}

