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

void lowercase (char * txt) {
    for (int i=0;i<strlen(txt);i++) {
        txt[i] = tolower(txt[i]);
    }
}

int main() {

    char text[101];
    char substring[101];

    fgets(text, 100, stdin);
    cleanString(text);
    fgets(substring, 100, stdin);
    cleanString(substring);

    if (strlen(substring) > strlen(text)) {
        printf("NO");
        return 0;
    }

    //Reshenie 1.
//    for (int i = 0; i < strlen(text) - strlen(substring); i++) {
//        if (tolower(text[i]) == tolower(substring[0])) {
//            int flag = 1;
//            for (int j = 1; j < strlen(substring); j++) {
//                if (tolower(substring[j]) != tolower(text[i + j])) {
//                    flag = 0;
//                    break;
//                }
//            }
//            if (flag == 1) {
//                printf("YES");
//                return 0;
//            }
//        }
//    }
//
//    printf("NO");

    lowercase(text);
    lowercase(substring);
    char * res = strstr(text, substring);
    if (res==0){
        printf("NO");
    } else {
        printf("YES");
    }
    return 0;
}

