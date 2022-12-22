#include<stdio.h>

int max(int *array, int n) {
    if (n == 2) {
        if (array[0] > array[1]) {
            return array[0];
        } else {
            return array[1];
        }
    } else {
        int maxPrevious = max(array, n - 1);
        if (array[n - 1] > maxPrevious) {
            return array[n - 1];
        } else {
            return maxPrevious;
        }
    }
}


int max2 (int * array, int n, int max) {
    if (n==0){
        return max;
    }
    if (array[n-1]>max) {
        return max2(array,n-1, array[n-1]);
    } else {
        return max2(array,n-1, max);
    }
}

int main() {

    int n;
    scanf("%d", &n);

    int niza[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &niza[i]);
    }

    printf("%d", max2(niza, n, niza[n-1]));

    return 0;
}