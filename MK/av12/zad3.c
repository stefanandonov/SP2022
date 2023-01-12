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

int main() {
    char text[101];

    fgets(text, 100, stdin);
    cleanString(text);

    int start, length;
    scanf("%d%d", &start, &length);

//    Reshenie br.1
//    int end = start + length - 1;
//    if (end > strlen(text)) {
//        end = strlen(text);
//    }
//
//    for (int i = start - 1; i < end; i++) {
//        printf("%c", text[i]);
//    }

//Reshenie br.2

    char result[101];
    strncpy (result, text + start - 1, length);
    result[length] = '\0';

    printf("%s", result);


    return 0;
}

