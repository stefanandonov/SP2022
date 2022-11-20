//
// Created by Stefan Andonov on 11/10/22.
//

#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int min, max;
        min = max = a;

        if (b < min) {
            min = b;
        }
        if (c < min) {
            min = c;
        }

        if (b > max) {
            max = b;
        }
        if (c > max) {
            max = c;
        }

        float res = 2 * min - max / 2.0 + abs(min - a);

        printf("%.2f\n", res);
    }
    return 0;
}