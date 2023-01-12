#include<stdio.h>
#include<ctype.h>
#include<string.h>

void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while ((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

void clearString(char *string) {
    if (string[strlen(string) - 1] == '\n') {
        string[strlen(string) - 1] = '\0';
    }
}

void processLine(char *line) {
    int letters = 0;
    int spaces = 0;
    for (int i = 0; i < strlen(line); i++) {
        if (isalnum(line[i])){
            ++letters;
        }
        if (isspace(line[i])){
            ++spaces;
        }
    }
    printf("%d, %d: %s\n", letters, spaces+1, line);
}

int main() {
    wtf();

    FILE *fp = fopen("input.txt", "r");

    char line[100];

    while (fgets(line, sizeof(line), fp) != NULL) {
        clearString(line);
        processLine(line);
    }
    return 0;
}
