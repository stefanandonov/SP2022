#include<stdio.h>

int main() {

    


    int i;
    for (i=1000;i<10000;i++) {
        int sumOfLastThreeDigits = i%10 + i/10%10 + i/100%10;
        int firstDigit = i/1000;
        if (firstDigit == sumOfLastThreeDigits){
            printf("%d\n", i);
        }
    }
    return 0;
}