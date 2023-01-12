//
// Created by Stefan Andonov on 12/26/22.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void removeNewLine(char *text) {
    /*
     * Clean the string from a new line character
     * */
    text[strlen(text) - 1] = '\0';
}

int findFirstLetter(char *txt) {
    for (int i = 0; i < strlen(txt); i++) {
        if (isalpha(txt[i])) {
            return i;
        }
    }
}

void cleanSpacesAtEnd(char *txt) {
    int i;
    for (i = strlen(txt) - 1; i > 0; i--) {
        if (!isspace(txt[i])) {
            break;
        }
    }
    txt[i+1]='\0';
}


int main() {
    char txt[101];
    char result[101];

    fgets(txt, 100, stdin);
    removeNewLine(txt);

    strcpy(result, txt + findFirstLetter(txt));
    cleanSpacesAtEnd(result);

    strcpy(txt,result);

    puts(txt);


    return 0;
}

