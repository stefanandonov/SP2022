//
// Created by Stefan Andonov on 10/18/22.
//
#include<stdio.h>

int main() {
    int year;
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("Leap year");
    } else {
        printf("Regular year");
    }

    return 0;
}