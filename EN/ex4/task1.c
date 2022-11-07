//
// Created by Stefan Andonov on 10/27/22.
//

#include<stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
//    if (a>b){
//        printf("%d", a);
//    } else { //a<=b
//        printf("%d", b);
//    }
    printf("%d", (a > b ? a : b));
    return 0;
}