//
// Created by Stefan Andonov on 12/26/22.
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

int length(char *text) {
    int counter = 0;
    while (*text) {
        ++counter;
        text++;
    }
    return counter;
}

int lengthR(char *text) {
    if (*text == '\0') {
        return 0;
    } else {
        return 1 + length(text + 1);
    }
}

int countOccurrence(char *text, char character) {
    int counter = 0;
    while (*text) { //se dodeka ne dojdeme do null terminatorot
        if (tolower(*text) == tolower(character)) { //ignore case
            ++counter;
        }
        text++; //odime na naredniot karakteri
    }
    return counter;
}

int main() {
    char text[101];
    char character;

    fgets(text, 100, stdin);
    cleanString(text);

    printf("%d\n", length(text));

    scanf("%c", &character);

//    printf("%s\n%c", text, character);

    printf("%d", countOccurrence(text, character));

    return 0;
}

