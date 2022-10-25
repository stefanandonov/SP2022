#include<stdio.h>

int main() {
    float radius;
    scanf("%f", &radius);
    printf("The perimeter of the circle is %.2f and the area is %.2f", 2 * radius * 3.14, radius*radius*3.14);
    return 0;
}