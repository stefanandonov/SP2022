
#include<stdio.h>

int main() {
    float x, y, radius;

    scanf("%f%f%f", &x, &y, &radius);
    int kv1 = 0, kv2 = 0, kv3 = 0, kv4 = 0;
    if (x == 0.0 && y == 0.0) {
        printf("1111");
        return 0;
    }

    if (x > 0 && y > 0) { //centarot e vo I kvadrant
        kv1 = 1;
        if (radius > y) {
            kv4 = 1;
        }
        if (radius > x) {
            kv2 = 1;
        }
        //dist = sqrt((x1-x2)^2+(y1-y2)^2)
        //dist = sqrt(x^2+y^2)
        //radius > sqrt(x^2+y^2) //^2
        //radius*radius > x*x + y*y
        if (radius * radius > (x * x + y * y)) { //radiusot e pogolem od rastojanieto od centarot do (0,0)
            kv3 = 1;
        }
    }

    if (x>0 && y<0) {
        kv2=1;

    }
    return 0;
}