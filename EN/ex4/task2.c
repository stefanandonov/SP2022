//
// Created by Stefan Andonov on 10/27/22.
//

#include<stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    if ((year%4==0 && year%100!=0) || year%400==0) {
        printf("Year %d is leap year", year);
    } else {
        printf("Year %d is regular year", year);
    }
    return 0;
}