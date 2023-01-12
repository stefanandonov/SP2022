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
        if (tolower(text[i]) != tolower(text[len - i - 1])) {
            return 0;
        }
    }
    return 1;
}

int main () {
    char txt [101];

    fgets(txt,100,stdin);
    cleanString(txt);

    char cleanTxt[101];


    int j=0;
    for (int i=0;i<strlen(txt);i++) {
        if (isalpha(txt[i])) {
            cleanTxt[j] = txt[i];
            ++j;
        }
    }

    cleanTxt[j]='\0';

    if (isPalindrome(cleanTxt)){
        printf("YES");
    } else {
        printf("NO");
    }



    return 0;
}

