#include<stdio.h>

int main () {
    int number;
    scanf("%d", &number);
    printf("Most significant digit: %d. Least significant digit: %d", number/100, number%10);
    return 0;
}