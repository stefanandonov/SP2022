//
// Created by Stefan Andonov on 10/14/22.
//Да се напише програма за пресметување и
// печатење на плоштината и периметарот на круг.
// Радиусот на кругот се чита од стандарден влез
// (тастатура) како децимален број.
//
#include<stdio.h>
#include<math.h>
int main() {
    float radius;
    scanf("%f", &radius);
    printf("The circle with radius %.2f has perimeter %.10f and area of %.10f", radius, 2*radius*M_PI, radius*radius*M_PI);
    return 0;
}
