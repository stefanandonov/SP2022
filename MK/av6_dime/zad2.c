//
// Created by Stefan Andonov on 11/15/22.
//

#include<stdio.h>
#include<math.h>
int main() {
    int x, n;
    scanf("%d %d", &x, &n);
    int number;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &number);
        int tmp = number;
        int digits = 0;

        while(tmp){
            ++digits;
            tmp/=10;
        }

        int firstDigit = number / (int) pow(10,digits-1);
        int rightPart = number % (int) pow(10,digits-1);
//        int rightPart = 0;
//        int coeff = 1;
//        while (tmp >= 10) {
//            int lastDigit = tmp % 10;
//            rightPart += (lastDigit * coeff);
//            coeff *= 10;
//            tmp /= 10;
//        }
//        int firstDigit = tmp;
        int newNumber = rightPart * 10 + firstDigit;
        if (newNumber % x == 0) {
            printf("DA\n");
        } else {
            printf("NE\n");
        }
        printf("%d-->%d\n", number, newNumber);
    }
    return 0;
}

