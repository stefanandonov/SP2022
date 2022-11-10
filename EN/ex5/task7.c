//
// Created by Stefan Andonov on 11/10/22.
//

#include<stdio.h>

int main() {
    int number1, number2;
    if (scanf("%d%d", &number1, &number2) != 2) {
        return 0;
    }

    int max1, max2;
    if (number1 > number2) {
        max1 = number1;
        max2 = number2;
    } else {
        max1 = number2;
        max2 = number1;
    }

    while (scanf("%d", &number1)){
        if (number1>max1){
            max2=max1;
            max1=number1;
        } else if (number1>max2){
            max2=number1;
        }
    }

    printf("%d %d", max1, max2);
    return 0;
}