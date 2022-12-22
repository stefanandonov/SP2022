//
// Created by Stefan Andonov on 12/22/22.
//

#include<stdio.h>

void calculate(int *array, int n, int *min, int *max) {
    *min = *array;
    *max = *array;
    for (int i = 1; i < n; i++) {
        if (*(array + i) < *min) {
            *min = *(array + i);
        }
        if (*(array + i) > *max) {
            *max = *(array + i);
        }
    }
}

int main() {
    int array[100];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", array + i);
    }

    int min, max;

    calculate(array, n, &min, &max);

    printf("%d %d", min, max);

    return 0;
}

