#include<stdio.h>

int sumOfDigits(int number) {
    if (number < 10) { //ednocifren
        return number;
    } else {
        return number % 10 + sumOfDigits(number / 10);
    }

}

int main() {
    int n;
    scanf("%d", &n);
    printf("Sum of digit of %d : %d", n, sumOfDigits(n));
    return 0;
}