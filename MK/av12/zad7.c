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
    char password[101];

    fgets(password, 100, stdin);
    cleanString(password);

    if (strlen(password) < 8) {
        printf("weak");
        return 0;
    }

    int hasUpperLetter = 0, hasDigit = 0, hasSpecialCharacter = 0;

    for (int i = 0; i < strlen(password); i++) {
        if (isupper(password[i])) {
            hasUpperLetter = 1;
        }
        if (isdigit(password[i])) {
            hasDigit = 1;
        }
        if (!isalnum(password[i]) && !isspace(password[i])) {
            hasSpecialCharacter = 1;
        }
    }

    if (hasUpperLetter == 1 && hasDigit == 1 && hasSpecialCharacter == 1) {
        printf("strong");
    } else {
        printf("week");
    }

    return 0;
}

