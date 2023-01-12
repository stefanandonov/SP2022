//
// Created by Stefan Andonov on 1/10/23.
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

int contains(char *line, char *word) {
    char *r = strstr(line, word);
    if (r == NULL) {
        return 0;
    } else {
        return 1 + contains(r + 1, word);
    }
}

int main() {

    FILE *fp = fopen("/Users/stefan.a/CLionProjects/SP2022/MK/av13/text.txt", "r");

    char line[101];
    char *word = "123";
    int sum = 0;
    while ((fgets(line, sizeof(line), fp)) != NULL) {
        cleanString(line);
        sum += contains(line, word);
    }

    printf("Zborot %s se pojavuva %d pati vo datotekata.", word, sum);

    fclose(fp);
    return 0;
}
