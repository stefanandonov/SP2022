//
// Created by Stefan Andonov on 12/15/22.
//

int sum(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sum(n - 1);
    }
}

long int fact(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

long int formula(int n) {
    if (n==1){
        return 1;
    } else {
        return fact(sum(n)) + formula(n-1);
    }
}

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%ld", formula(n));
    return 0;
}