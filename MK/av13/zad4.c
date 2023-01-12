//
// Created by Stefan Andonov on 1/10/23.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void cleanString(char *text) {
    /*
     * Clean the string from a new line character
     * */
    text[strlen(text) - 1] = '\0';
}

int isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'u' || c == 'i' || c == 'o';
}

int vowels (char * txt) {
    int counter = 0;
    for (int i=0;i<strlen(txt);i++){
        if (isVowel(tolower(txt[i]))){
            ++counter;
        }
    }
    return counter;
}

int main() {

    FILE *fp = fopen("/Users/stefan.a/CLionProjects/SP2022/MK/av13/text.txt", "r");

    char line[101];
    int l = 0;
    int totalVowels = 0;
    while ((fgets(line, sizeof(line), fp)) != NULL) {
        cleanString(line);
        int v = vowels(line);
        if (v > 10) {
            ++l;
        }
        totalVowels += v;
    }

    fclose(fp);

    printf("Vkupno %d reda imaat povekje od 10 samoglaski.\n"
           "Vo datotekata ima vkupno %d samoglaski.", l, totalVowels);
    return 0;
}
