//
// Created by Stefan Andonov on 10/18/22.
//
#include<stdio.h>

int main() {
    int points;
    scanf("%d", &points);

    int grade = points / 10 + 1;
    int lastDigit = points % 10;
    char sign = ' ';

    if (lastDigit <= 2) {
        sign = '-';
    }
    if (lastDigit >= 7) {
        sign = '+';
    }
//    if (lastDigit>2 && lastDigit<7){ nema potreba bidejki po default e space
//        sign = ' ';
//    }

    if (grade >= 10) {
        grade = 10;
        if (sign == '+') {
            sign = ' ';
        }
    }
    if (grade <= 5) {
        grade = 5;
        sign = ' ';
    }
    printf("%d%c", grade, sign);

//    if (points >= 90) {
//        printf("10");
//    } else if (points >= 80) {
//        printf("9");
//    } else if (points >= 70) {
//        printf("8");
//    } else if (points >= 60) {
//        printf("7");
//    } else if (points >= 50) {
//        printf("6");
//    } else {
//        printf("5");
//    }
    return 0;
}

