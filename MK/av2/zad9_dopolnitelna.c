//
// Created by Stefan Andonov on 10/14/22.
// Dva karakteri cifri -> suma na tie cifri
//
#include<stdio.h>
#include<math.h>

int main() {
    char digit1, digit2;
    scanf("%c%c", &digit1, &digit2);
    int sum = (digit1 - 48) + (digit2 - 48);
    printf("%d", sum);
    return 0;
}
