#include<stdio.h>

int main() {
    float x, y;
    float radius;
    int q1 = 0, q2 = 0, q3 = 0, q4 = 0;
    scanf("%f %f %f", &x, &y, &radius);

    if (x == 0 && y == 0) {
        printf("1111");
        return 0;
    }

    if (x > 0 && y > 0) {
        q1 = 1;
        if (radius > y) {
            q4 = 1;
        }
        if (radius > x) {
            q2 = 1;
        }
        if (radius*radius > (x*x)+(y*y)){
            q3=1;
        }
    }
    return 0;
}