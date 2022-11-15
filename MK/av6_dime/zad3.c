//
// Created by Stefan Andonov on 11/15/22.
//

#include<stdio.h>
#include<math.h>

int divisorsCount(int number) {
    int counter = 0;
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            ++counter;
        }
    }
    return counter;
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = n - 1; i >= 0; --i) {
        if (divisorsCount(i) < m) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}

