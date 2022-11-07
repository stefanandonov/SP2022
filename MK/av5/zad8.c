#include<stdio.h>

int main() {
    int max1, max2;
    int a, b; //prvi dva broja
    if (scanf("%d %d", &a, &b)!=2){
        return 0;
    }
    if (a > b) {
        max1 = a;
        max2 = b;
    } else {
        max1 = b;
        max2 = a;
    }
    int number; // na preostanite broja
    while (scanf("%d", &number)) {
        if (number > max1) {
            max2 = max1;
            max1 = number;
        } else if (number > max2){
            max2 = number;
        }
    }

    printf("%d %d", max1, max2);

    return 0;
}