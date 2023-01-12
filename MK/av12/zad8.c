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

void clean(char *txt) {
    int i;
    for (i = 0; i < strlen(txt); i++) {
        if (isalpha(txt[i])) {
            if (islower(txt[i])) {
                txt[i] = toupper(txt[i]);
            } else {
                txt[i] = tolower(txt[i]);
            }
        } else {
            int j;
            for (j = i; j < strlen(txt) - 1; j++) {
                txt[j] = txt[j + 1];
            }
            txt[j]='\0';
            i--;
        }
    }
}

int main() {
    char txt[101];

    fgets(txt, 100, stdin);
    removeNewLine(txt);

    clean(txt);

    printf("%s", txt);
    return 0;
}

