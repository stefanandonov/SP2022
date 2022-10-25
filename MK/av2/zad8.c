//
// Created by Stefan Andonov on 10/14/22.
//Golema bukva vo mala bukva
//
#include<stdio.h>
#include<math.h>

int main() {
    char upperLetter;
    scanf("%c", &upperLetter);
    char lowerLetter = upperLetter + 32;
    printf("%d", lowerLetter);
    return 0;
}
