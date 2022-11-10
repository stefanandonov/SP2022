//
// Created by Stefan Andonov on 11/10/22.
//

#include<stdio.h>

int reverseNumber (int number){
    int rev = 0;
    while (number > 0) {
        int lastDigit = number % 10;
        rev = 10 * rev + lastDigit;
        number /= 10;
    }
    return rev;
}

int main() {
    int a, b;

    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (i == reverseNumber(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}