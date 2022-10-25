//
// Created by Stefan Andonov on 10/18/22.
// Да се напише програма со која
// ќе се отпечати максимумот од два броја чии вредности се читаат од тастатура.
//
#include<stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
//    if (a > b) {
//        printf("%d", a);
//    } else {
//        printf("%d", b);
//    }
    printf("%d", (a > b) ? a : b);

    return 0;
}