//
// Created by Stefan Andonov on 11/15/22.
//

#include<stdio.h>

int transformNumber (int number, int c1, int c2){
    int newNumber = 0;
    int coeff = 1;
    while (number) {
        int lastDigit = number%10;
        if (lastDigit==c1){
            newNumber+=(c2*coeff);
        } else {
            newNumber+=(lastDigit*coeff);
        }

        coeff*=10;
        number/=10;
    }
    return newNumber;
}

int main() {
    int c1, c2;
    scanf("%d %d", &c1, &c2);
    int n; //kolku broja ke chitame
    scanf("%d", &n);
    //gi vcituvame site n broevi
    for (int i = 1; i <= n; i++) {
        int number;
        scanf("%d", &number);
        int newNumber = transformNumber(number,c1,c2);
        printf("%d %d\n", newNumber, newNumber+1);
    }
    return 0;
}

