#include<stdio.h>

int main() {
    int points;
    int grade;
    scanf("%d", &points);
    int lastDigit = points % 10;

    char sign = ' ';
    if (lastDigit >= 7) {
        sign = '+';
    }
    if (lastDigit <= 2) {
        sign = '-';
    }


    grade = points / 10 + 1;
    if (grade <= 5) {
        grade = 5;
        sign = ' ';
    }
    if (grade > 10) {
        grade = 10;
        if (sign == '+') {
            sign = ' ';
        }
        if (points >= 100) {
            sign = ' ';
        }
    }

// more complex solution
//    if (points >= 90) {
//        grade = 10;
//    } else if (points >= 80) {
//        grade = 9;
//    } else if (points >= 70) {
//        grade = 8;
//    } else if (points >= 60) {
//        grade = 7;
//    } else if (points >= 50) {
//        grade = 6;
//    } else {
//        grade = 5;
//    }

    printf("%d%c", grade, sign);
    return 0;
}