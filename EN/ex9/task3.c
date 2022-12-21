#include<stdio.h>

int isPrime(int number) {
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return 0; //we found a divisor => the number is not prime
        }
    }

    return 1;

}

int main() {
    int number;
    scanf("%d", &number);

    for (int i = number + 1;; i++) {
        if (isPrime(i)) {
            printf("%d", i - number);
            break;
        }
    }

    return 0;
}