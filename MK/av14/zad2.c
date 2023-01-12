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

int occurres(char *line, char c) {
    int counter = 0;
    for (int i = 0; i < strlen(line); i++) {
        if (line[i] == c) {
            ++counter;
        }
    }
    return counter;
}

int main() {
    char c;
    int x;
    scanf("%c\n%d\n", &c, &x);
//    printf("%c\n%d\n", c, x);
    char line[101];

    char max1[101], max2[100], max3[100];
    int flag1 = 1, flag2 = 1, flag3 = 1;

    while (fgets(line, sizeof(line), stdin)) {
        cleanString(line);
        if (strcmp(line, "#") == 0) {
            break;
        }
        if (occurres(line, c) == x) {
            printf("%s\n", line);

            if (flag1) { //nemam max1 prvpat line ja sodrzi c x pati
                strcpy(max1, line);
                flag1 = 0;
            } else if (flag2) { //nemam max2 vtorpat line ja sodrzi c x pati
                if (strlen(line) > strlen(max1)) {
                    strcpy(max2, max1);
                    strcpy(max1, line);
                } else {
                    strcpy(max2, line);
                }
                flag2 = 0;
            } else if (flag3) { ////nemam max3 tretpat line ja sodrzi c x pati
                if (strlen(line) > strlen(max1)) {
                    strcpy(max3, max2);
                    strcpy(max2, max1);
                    strcpy(max1, line);
                } else if (strlen(line) > strlen(max2)) {
                    strcpy(max3, max2);
                    strcpy(max2, line);
                } else {
                    strcpy(max3, line);
                }
                flag3 = 0;
            } else { //4,5,6,itn pat koga line ja sodrzina c x pati
                if (strlen(line) > strlen(max1)) {
                    strcpy(max3, max2);
                    strcpy(max2, max1);
                    strcpy(max1, line);
                } else if (strlen(line) > strlen(max2)) {
                    strcpy(max3, max2);
                    strcpy(max2, line);
                } else if (strlen(line)>strlen(max3)) {
                    strcpy(max3, line);
                }
            }
        }
    }

    if (!flag1){
        printf("%s\n", max1);
    }
    if (!flag2){
        printf("%s\n", max2);
    }
    if (!flag3){
        printf("%s\n", max3);
    }
    return 0;
}
