//
// Created by Stefan Andonov on 11/10/22.
//

#include<stdio.h>

int main () {

    int i,n, sum=0;

    for (i=11;i<100;i+=2){
        printf("%d %c ", i, ((i==99)?'=':'+'));
//        if (i<99) {
//            printf("%d + ", i);
//        } else {
//            printf("%d = ", i);
//        }
        sum+=i;
    }

    printf("%d", sum);
    return 0;
}