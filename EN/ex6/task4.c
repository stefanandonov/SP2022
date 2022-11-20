//
// Created by Stefan Andonov on 11/10/22.
//

#include<stdio.h>
#include<math.h>

int digits(int number) {
    int count = 0;
    while (number) {
        ++count;
        number /= 10;
    }
    return count;
}

int reverse(int number) {
    int r = 0;
    while (number) {
        int ld = number % 10;
        r = 10 * r + ld;
        number/=10;
    }
    return r;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int counter = 0;
    for (int i = a + 1; i < b; i++) {
        int d = digits(i);
        int lastDigit = i % 10;
        int firstDigit = i / (int) pow(10, d - 1);
        int middle = i % (int) pow(10, d - 1) / 10;
        if (i<100 || middle==0){
            continue;
        }
        int reverseMiddleNumber = reverse(middle);

        if (reverseMiddleNumber == ((firstDigit+lastDigit)*(reverseMiddleNumber/(firstDigit+lastDigit)))){
            printf("%d -> (%d == (%d + %d) * %d)\n", i, reverseMiddleNumber, lastDigit, firstDigit, (reverseMiddleNumber/(firstDigit+lastDigit)));
            ++counter;
        }
    }

    printf("%d", counter);
    return 0;
}