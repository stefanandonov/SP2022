//
// Created by Stefan Andonov on 11/10/22.
//

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int r0 = 0, r1 = 0, r2 = 0;
    int number;
    for (int i = 0; i < n; i++) {
        scanf("%d", &number);
        int residue = number % 3;
        switch (residue) {
            case 0:
                r0++; break;
            case 1:
                r1++; break;
            default: //residue 2
                r2++;
        }

    }

    printf("0 -> %d\n1 -> %d\n2 -> %d", r0, r1, r2);
    return 0;
}