//
// Created by Stefan Andonov on 10/20/22.
//

#include<stdio.h>

int main() {
    char c1, c2, c3, c4, c5;
    scanf("%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5);
    printf("%d", c1 + c2 + c3 + c4 + c5 - 5 * '0');
    return 0;
}