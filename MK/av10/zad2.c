#include<stdio.h>



int isPrime(int number, int possibleDivisor) {
    if (possibleDivisor == 1) {
        return 1;
    }

    if (number % possibleDivisor == 0) {
        return 0;
    }

    return isPrime(number, possibleDivisor-1);
}

int nextPrime (int number) {
    if (isPrime(number, number-1)) {
        return number;
    } else {
        return nextPrime(number+1);
    }
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d", nextPrime(n+1)-n);
    return 0;
}