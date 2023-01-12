//
// Created by Stefan Andonov on 1/10/23.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'u' || c == 'i' || c == 'o';
}

int main() {
    FILE *fp = fopen("/Users/stefan.a/CLionProjects/SP2022/MK/av13/text.txt", "r");

    if (fp == NULL) {
        printf("File not found!");
    }

    char current = 'X';
    int vowels = 0, consonants = 0;
    while ((current = fgetc(fp)) != EOF) {
        if (isalpha(current)) {
            char lowerC = tolower(current);
            if (isVowel(lowerC)) {
                ++vowels;
            } else {
                ++consonants;
            }

        }
    }

    fclose(fp);

    printf("Odnos samoglaski/soglaski: %d/%d = %.2f", vowels, consonants, (float) vowels/consonants);


    return 0;
}
