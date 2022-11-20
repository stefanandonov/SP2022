//
// Created by Stefan Andonov on 11/10/22.
//

#include<stdio.h>

int countOccurrences(int digit, int number) {
    int counter = 0;

    //counting the occ. of C in the number i
    while (number) {
        int lastDigit = number % 10;
        if (lastDigit == digit) {
            counter++;
        }
        number /= 10;
    }

    return counter;

}

int main() {
    int n, p, c;
    scanf("%d %d %d", &n, &p, &c);

    for (int i = n + 1;; i++) {
        if (countOccurrences(c, i) == p) {
            printf("%d", i);
            break;
        }
    }

    return 0;
}