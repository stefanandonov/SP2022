//
// Created by Stefan Andonov on 11/10/22.
//

#include<stdio.h>
#include<math.h>

int main() {
    int x, n;
    scanf("%d %d", &x, &n);

    for (int i = 0; i < n; i++) {
        int number;
        scanf("%d", &number);

        //count the number of digit;
        int digits = 0;
        int tmp = number;
        while (tmp) {
            tmp /= 10;
            ++digits;
        }
        printf("%d -> %d\n", number, digits);

        int firstDigit = number / (int) pow(10, digits - 1);
        int restOfTheNumber = number % (int) pow(10, digits - 1);

        int newNumber = restOfTheNumber * 10 + firstDigit;

        if (newNumber % x == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }

    }

    return 0;
}