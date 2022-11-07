#include<stdio.h>

int main() {
    float x, y;
    scanf("%f%f", &x, &y);

    if (x==0 && y==0){
        printf("Coordinate start");
        return 0;
    }
    if (y==0){
        printf("x-axis");
        return 0;
    }
    if (x==0){
        printf("y-axis");
        return 0;
    }


    if (y>0){
        if (x>0){
            printf("1");
        } else { //x<=0
            printf("2");
        }
    } else { //y<0
        if (x>0){
            printf("4");
        }else { //x<0
            printf("3");
        }
    }

    return 0;
}