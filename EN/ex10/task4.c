//
// Created by Stefan Andonov on 12/15/22.
//

#include<stdio.h>

int count8(int number) {
    if (number == 0) {
        return 0;
    }

    int ld = number % 10;
    int sld = number / 10 % 10;

    if (ld != 8) {
        return count8(number / 10);
    } else {
        if (sld == 8) {
            return 2 + count8(number / 10);
        } else {
            return 1 + count8(number / 10);
        }
    }

}


int main() {
    int n;
    scanf("%d", &n);
    printf("%d", count8(n));
    return 0;
}