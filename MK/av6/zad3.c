#include<stdio.h>

int sumOfDigit(int number) {
    int sum = 0;
    while(number){
        int digit = number%10;
        sum+=digit;
        number/=10;
    }
    return sum;
}

int maxDigit(int number) {
    int max = 0;
    while(number){
        int lastDigit = number%10;
        if (lastDigit>max){
            max = lastDigit;
        }
        number/=10;
    }
    return max;
}

int main () {
    int number;
    int previousMaxDigit = 0;
    while(scanf("%d", &number)){
        int sum = sumOfDigit(number)+previousMaxDigit;
        printf("%d: %d", number, sum);
        previousMaxDigit = maxDigit(number);
    }
    return 0;
}