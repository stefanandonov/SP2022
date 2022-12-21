#include<stdio.h>

int count8(int number) {
    if (number == 0) {
        return 0;
    } else {
        int lastDigit = number % 10;
        int secondToLast = number / 10 % 10;

        if (lastDigit==8){
            if (secondToLast==8){
                return 2 + count8(number/10);
            } else {
                return 1 + count8(number/10);
            }
        } else {
            return count8(number/10);
        }
    }

}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", count8(n));
    return 0;
}