//
// Created by Stefan Andonov on 1/12/23.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int isVowel (char c) {
    c = tolower(c);
    return c=='a' || c=='e' || c=='i' || c=='u' || c=='o';
}

int main () {


    //1. open the file
    FILE * fp = fopen("/Users/stefan.a/CLionProjects/SP2022/EN/ex13/input.txt", "r");

    //2. how are we going to read from file? CHAR BY CHAR

    char current;
    int vowels = 0, consonants = 0;

    while ((current = fgetc(fp))!=EOF){
        if (isalpha(current)){
            if (isVowel(current)){
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Ratio vowels/consonats: %d/%d = %.2f", vowels, consonants, (float) vowels/consonants);
    return 0;
}

