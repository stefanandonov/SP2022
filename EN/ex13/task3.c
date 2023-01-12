//
// Created by Stefan Andonov on 1/12/23.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void clearString (char * string) {
    if (string[strlen(string)-1]=='\n'){
        string[strlen(string)-1]='\0';
    }
}

int main() {
    FILE *ifp = fopen("/Users/stefan.a/CLionProjects/SP2022/EN/ex13/input.txt", "r");
    FILE *ofp = fopen("/Users/stefan.a/CLionProjects/SP2022/EN/ex13/output.txt", "w");

    char line[100];

    while (fgets(line, sizeof(line), ifp) != NULL) {
        clearString(line);
        fprintf(ofp, "%d\n", strlen(line));
        for (int i=0;i<strlen(line);i++){
            if (isalpha(line[i])){
                if (islower(line[i])){
                    fprintf(ofp, "%c", toupper(line[i]));
                } else {
                    fprintf(ofp, "%c", tolower(line[i]));
                }
            } else {
                fprintf(ofp, "%c", line[i]);
            }
        }
        fprintf(ofp, "\n");
    }


    fclose(ifp);
    fclose(ofp);
    return 0;
}

