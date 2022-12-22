//
// Created by Stefan Andonov on 12/22/22.
//

#include<stdio.h>

void swap (int * a, int * b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main () {
    int a = 5, b = 6;

    swap(&a,&b);

    printf("%d %d", a, b);
    return 0;
}

