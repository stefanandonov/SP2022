//
// Created by Stefan Andonov on 10/27/22.
//

#include<stdio.h>

int main () {
    char c;
    scanf("%c", &c);

    printf("The character is upper case letter? %d\n", (c>='A')&&(c<='Z'));
    printf("The character is lower case letter? %d\n", (c>='a')&&(c<='z'));
    printf("The character is digit? %d\n", (c>='0')&&(c<='9'));

    return 0;
}