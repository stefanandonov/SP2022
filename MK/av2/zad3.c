#include<stdio.h>

int main() {
    float a = 5, b = 7.5, c = 10.2;
    float perimeter = a + b + c;
    float s = perimeter / 2;
    float areaSquared = s * (s - a) * (s - b) * (s - c);
    printf("For the triangle with sides a = %.2f, b = %.2f, c = %.2f the perimeter is %.2f and the area (squared) is %.2f", a, b, c, perimeter, areaSquared);
    return 0;
}