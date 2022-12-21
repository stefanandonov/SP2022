#include<stdio.h>

int gcd_euclid(int m, int n) {
    if (m % n == 0) {
        return n;
    } else {
        return gcd_euclid(n, m % n);
    }
}

int main() {
    return 0;
}