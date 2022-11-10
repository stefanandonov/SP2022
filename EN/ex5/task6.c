//
// Created by Stefan Andonov on 11/10/22.
//

#include<stdio.h>

int main () {
    int number;
    int max;
    int firstFlag = 1;
    while(scanf("%d", &number)){
        if (number>100){
            continue;
        }
        if (firstFlag){
            max = number;
            firstFlag = 0;
        } else if (number>max){
            max = number;
        }
    }

    printf("%d", max);
    return 0;
}