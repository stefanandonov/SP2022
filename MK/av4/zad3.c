//
// Created by Stefan Andonov on 10/18/22.
//
#include<stdio.h>

int main() {
    float x, y;
    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0) {
        printf("Center");
        return 0;
    }

    if (x == 0) {
        printf("y-axis");
        return 0;
    }

    if (y == 0) {
        printf("x-axis");
        return 0;
    }

    if (y > 0) { //Ili I ili II kvadrant
        if (x > 0) {
            printf("1");
        } else {
            printf("2");
        }
    } else { // Ili III ili IV kvadrant
        if (x > 0) {
            printf("4");
        } else {
            printf("3");
        }
    }
    return 0;
}