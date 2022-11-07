#include<stdio.h>

int main() {
    float a, b, c;
    float tmp;
    scanf("%f%f%f", &a, &b, &c);

    if (a < 0 || b < 0 || c < 0) {
        return 0;
    }

    //1. Check if we can construct a triangle
    if ((a + b) > c && (a + c) > b && (b + c) > a) {
        //intermediate step -> sort the numbers in ascending order
        if (a > b) {
            tmp = b;
            b = a;
            a = tmp;
        }
        if (b > c) {
            tmp = c;
            c = b;
            b = tmp;
        }
        if (a > c) {
            tmp = c;
            c = a;
            a = tmp;
        }

        //2. Check whether it's a right triangle
        if (a * a + b * b == c * c) {
            float area = a * b / 2;
            printf("The area of the right triangle is %.2f", area);
        } else {
            printf("Not a right triangle!");
        }
    } else {
        printf("A triangle cannot be constructed from sides %.2f, %.2f and %.2f", a, b, c);
    }
    return 0;
}