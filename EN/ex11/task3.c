//
// Created by Stefan Andonov on 12/22/22.
//

#include<stdio.h>

void findLargestIncreasingSubarray(int *array, int n, int *start, int *end) {
    int maxLength = 1;
    *start = 0;
    *end = 0;
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i; j < n - 1; j++) {
            if (array[j] > array[j + 1]) {
                break;
            }
        }
        int length = j - i + 1;
        if (length > maxLength) {
            maxLength = length;
            *start = i;
            *end = j;
        }
        i = j;
    }
}

int main() {
    int array[100];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int start, end;

    findLargestIncreasingSubarray(array, n, &start, &end);

    printf("%d %d %d", start, end, end - start + 1);
    return 0;
}

