//
// Created by Stefan Andonov on 12/15/22.
//

#include<stdio.h>

int gcd_euclid(int m, int n) {
    if (m % n == 0) {
        return n;
    } else {
        return gcd_euclid(n, m % n);
    }
}

int main() {
    int array[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int gcd = gcd_euclid(array[0], array[1]);

    for (int i = 2; i < n; i++) {
        gcd = gcd_euclid(gcd, array[i]);
    }

    printf("GCD: %d", gcd);


    return 0;
}