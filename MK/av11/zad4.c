#include<stdio.h>

int linearSearch(int *array, int n, int element) {
    for (int i = 0; i < n; i++) {
        if (*(array + i) == element) {
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
        } else if (element < array[middle]) {
            return binarySearch(element, array, start, middle - 1);
        } else {
            return binarySearch(element, array, middle + 1, end);
        }
    }
}

int main() {
    int array [] = {1,5,8,9,12,15,17,100,120,130};
    printf("%d", binarySearch(120, array, 0, 9));
    return 0;
}