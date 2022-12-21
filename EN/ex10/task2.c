//
// Created by Stefan Andonov on 12/15/22.
//

#include<stdio.h>


int isPrime(int number, int divisor) {
    //positive outcome
    if (divisor == 1) {
        return 1;
    }
    //negative outcome
    if (number % divisor == 0) {
        return 0;
    }

    return isPrime(number, divisor - 1);
}

int findNextPrime(int n) {
    if (isPrime(n, n - 1)) {
        return n;
    } else {
        return findNextPrime(n + 1);
    }

}

int main() {
    int n;
    scanf("%d", &n);
    int nextPrime = findNextPrime(n + 1);

    printf("%d - %d = %d", nextPrime, n, nextPrime - n);

    return 0;
}