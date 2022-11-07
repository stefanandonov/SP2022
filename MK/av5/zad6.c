//
// Created by Stefan Andonov on 11/7/22.
//

#include<stdio.h>

int reverseNumber(int number) {
    int reverse = 0;
    while (number > 0) {
        int c = number % 10;
        reverse = 10 * reverse + c;
        number /= 10;
    }
    return reverse;
}

int main() {
    int i, a, b;//range
    scanf("%d%d", &a, &b);

    for (i = a; i <= b; i++) {
        //sekoe i go proveruvame dali e palindrom
        if (i == reverseNumber(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}