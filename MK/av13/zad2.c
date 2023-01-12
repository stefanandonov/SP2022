//
// Created by Stefan Andonov on 1/10/23.
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

int main() {
    FILE *fp = fopen("/Users/stefan.a/CLionProjects/SP2022/MK/av13/text.txt", "r");
    FILE *ofp = fopen("/Users/stefan.a/CLionProjects/SP2022/MK/av13/output.txt", "w");

    char line[81];
    while (fgets(line, sizeof(line), fp) != NULL) {
        cleanString(line);
        int length = strlen(line);
        fprintf(ofp, "%d\n%s\n", length, line);
//        fputs(line, ofp);
    }

    fclose(fp);
    fclose(ofp);
    return 0;
}
