//
// Created by Stefan Andonov on 1/12/23.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void clearString(char *string) {
    if (string[strlen(string) - 1] == '\n') {
        string[strlen(string) - 1] = '\0';
    }
}

int isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o';
}

int getVowelsCount(char *string) {
//    int counter = 0;
//    for (int i=0;i<strlen(string);i++){
//        if (isVowel(string[i])){
//            ++counter;
//        }
//    }
//    return counter;
    if (*string == 0) {
        return 0;
    } else if (isVowel(*string)) {
        return 1 + getVowelsCount(string + 1);
    } else {
        return getVowelsCount(string + 1);
    }
}

int main() {
    FILE *fp = fopen("/Users/stefan.a/CLionProjects/SP2022/EN/ex13/input.txt", "r");

    char line[100];
    char max[100];
    int first = 1;
    while (fgets(line, sizeof(line), fp) != NULL) {
        clearString(line);
        printf("%s -> %d\n", line, getVowelsCount(line));
        if (getVowelsCount(line)>10){
            if (first) {
                //max = line; NO GOD PLEASE NO!!!!!!!!!!!
                strcpy(max, line);
                first = 0;
            } else {
                if (strlen(line) > strlen(max)){
                    strcpy(max, line);
                }
            }
        }

    }

    if (first){
        printf("NO SUCH LINES");
    } else {
        printf("%s", max);
    }




    fclose(fp);
    return 0;
}

