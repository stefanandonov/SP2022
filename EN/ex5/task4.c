//
// Created by Stefan Andonov on 11/10/22.
//

#include<stdio.h>

int main() {
    for (int i = 1000; i < 10000; i++) {
        int c1 = i / 1000;
        int c2 = i / 100 % 10;
        int c3 = i / 10 % 10;
        int c4 = i % 10;
        int sum = (c2+c3+c4);
        if (c1==sum){
            printf("%d (%d=%d+%d+%d)\n", i, c1, c2, c3, c4);
        }
    }
    return 0;
}