#include<stdio.h>

int main() {
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);

    //Dali moze voopsto da formirame triagolnik?
    if ((a + b) > c && (a + c) > b && (b + c) > a) {
        //da, moze da formirame triagolnik.
        //5,2,3 --> 2,5,3 --> 2,3,5  --> 2,3,5
        float tmp;
        if (a > b) {
            tmp = b; //tmp = 2
            b = a; //b=3
            a = tmp;//a=2
        }
        if (b > c) {
            tmp = c;
            c = b;
            b = tmp;
        }
        if (a > c) {
            tmp = a;
            a = c;
            c = tmp;
        }
        //a najmala, b e sredna i c e najgolema otsetcka
        if (a * a + b * b == c * c) { //proveruvame dali vazhi Pitagorovata teorama
            //ke ja presmetame plostinata
            float area = a * b / 2;
            printf("The area of the rectangular triangle is %.2f", area);
        } else {
            printf("The triangle is not with right angle!");
        }

    } else {
        printf("Can't form a triangle from the sides %.2f, %.2f, %.2f", a, b, c);
    }

    return 0;
}