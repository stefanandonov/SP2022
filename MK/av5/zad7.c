//
// Created by Stefan Andonov on 11/7/22.
//

#include<stdio.h>

int main() {
    int number;
    int max;
    int flagFirst = 1;
    while(scanf("%d", &number)){
        if (number>100){
            continue;
        }
        if (flagFirst){
            max = number;
            flagFirst = 0;
        }

        if (number>max){
            max=number;
        }
    }

    printf("%d", max);

    return 0;
}