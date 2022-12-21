#include<stdio.h>

int isPrime(int number) {
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return 0; //we found a divisor => the number is not prime
        }
    }

    return 1;

}

int main () {
    int counter = 0;
    for (int i=2;i<=1000;i++){
        if (isPrime(i)) {
            if (isPrime(i+2)) {
                printf("(%d, %d)\n", i, i+2);
                ++counter;
            }
        }
    }
    printf("Total number of pairs: %d", counter);
    return 0;
}