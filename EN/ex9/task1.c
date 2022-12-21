#include<stdio.h>
#include<math.h>

double diameter(double radius) {
    return 2 * radius;
}

double perimeter(double radius) {
    return diameter(radius) * M_PI;
}

double area(double radius) {
    return pow(radius, 2) * M_PI;
}

int main() {
    double radius;
    scanf("%lf", &radius);

    printf("Radius: %.2f\nDiameter: %.2f\nPerimeter: %.2f\nArea: %.2f",
           radius,
           diameter(radius),
           perimeter(radius),
           area(radius)
    );
    return 0;
}