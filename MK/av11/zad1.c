#include<stdio.h>

void swap(int * x, int * y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
//    printf("Inside of function: %d %d\n", x, y);
}

int main() {
    int x = 5;
    int y = 6;
    printf("%d %d\n", x, y);
    swap(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}