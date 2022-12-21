#include<stdio.h>

void longestSubArray(
        int *array,
        int n,
        int *start,
        int *end) {

    *start = 0;
    *end = 0;
    int maxLength = 0;
    int length = 0;
    int j;

    for (int i = 0; i < n; i++) {
        length = 0;
        for (j = i; j < n - 1; j++) {
            ++length;
            if (array[j] > array[j + 1]) {
                break;
            }
        }
        //vtor nacin za dolzina: j-i+1
        if (length > maxLength) {
            maxLength = length;
            *start = i;
            *end = j;
        }
        i = j;
    }
}

int main() {
    int n;
    int array[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int start,end;
    longestSubArray(array, n, &start, &end);


    return 0;
}