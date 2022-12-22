//
// Created by Stefan Andonov on 12/22/22.
//

#include<stdio.h>

int linearSearch(int element, int *array, int n) {
    for (int i = 0; i < n; i++) {
        if (array[i] == element) {
            return i;
        }
    }

    return -1;
}

int binarySearch(int element, int *array, int start, int end) {
    if (start == end) {
        if (array[start] == element) {
            return start;
        } else {
            return -1;
        }
    } else {
        int middle = (start + end) / 2;
        if (array[middle] == element) {
            return middle;
        } else if (element > array[middle]) {
            return binarySearch(element, array, middle + 1, end);
        } else {
            return binarySearch(element, array, start, middle - 1);
        }
    }
}

int main() {
    int array[100];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("%d", binarySearch(20, array, 0, 6));
    return 0;
}

