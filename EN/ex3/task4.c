#include<stdio.h>

int main () {
    int number;
    scanf("%d", &number);
    printf("Most significant digit: %d.\nLeast significant digit:%d", number/100, number%10);

}