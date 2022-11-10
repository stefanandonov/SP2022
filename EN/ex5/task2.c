//
// Created by Stefan Andonov on 11/10/22.
//

#include<stdio.h>

int main () {
    int n;
    float i, x;
    float y = 1;
    scanf("%f %d",&x, &n);

//    while(n>0){
//        y*=x;
//        --n;
//    }

    for (int i=1;i<=n;i++){
        y*=x;
    }

    printf("%.2f ^ %d = %.2f", x, n, y);
    return 0;
}