//
// Created by Stefan Andonov on 11/15/22.
//
#include<stdio.h>
#include<stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    int a, b, c;
    for (int i = 1; i <= N; i++) {
        scanf("%d %d %d", &a, &b, &c);
        int min, max;
        min = max = a;
        if (b > max) {
            max = b;
        }
        if (c > max) {
            max = c;
        }

        if (b < min) {
            min = b;
        }
        if (c < min) {
            min = c;
        }

//        printf("%d %d %d --> min: %d, max: %d", a, b, c, min, max);
        float rez = 2 * min - max / 2.0 + abs(min - a);
        printf("%.2f\n", rez);
    }
    return 0;
}