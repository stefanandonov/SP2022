//
// Created by Stefan Andonov on 12/26/22.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void cleanString (char * text) {
    /*
     * Clean the string from a new line character
     * */
    text[strlen(text)-1]='\0';
}

int main () {
    //deklaracija na tekstualna niza
    char text [101];

    //vcituvanje na tekstualna
    //scanf zastanuva na prvoto prazno mesto/nov red
//    scanf("%s", text);

    //fgets chita to prviot \n (so se nego)
    fgets(text, 100, stdin);
    cleanString(text);
    printf("%ld\n%s\n", strlen(text), text);

    fgets(text, 100, stdin);
    cleanString(text);
    printf("%s\n", text);

    return 0;
}

