#include<stdio.h>

int main() {
    //x = 3/2 + (5 – 46*5/12)
    //x = 3/2 - 14.16
    //x = 1.5 - 14.16
    //x = -12.67
    float x = 3.0 / 2 + (5 - 46.0 * 5 / 12);
    printf("%.2f", x);
    return 0;
}