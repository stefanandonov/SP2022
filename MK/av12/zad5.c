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

int isPalindrome(char *text) {
    int len = strlen(text);
    for (int i = 0; i < len / 2; i++) {
        if (text[i] != text[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char txt[101];

    fgets(txt, 100, stdin);
    cleanString(txt);

    char * reverseString;


    if (isPalindrome(txt)) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}

