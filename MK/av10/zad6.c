#include<stdio.h>

int asc(int number) {
    if (number < 10) {
        return 1;
    } else {
        int ld = number % 10;
        int sld = number / 10 % 10;
        if (sld > ld) {
            return 0;
        } else {
            return asc(number / 10);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    int counter = 0;
    for (int i = 0; i < n; i++) {
        int number;
        scanf("%d", &number);

        if (asc(number)) {
            printf("%d\n", number);
            ++counter;
            sum+=number;
        }
    }

    printf("%d\n%d", sum, counter);
    return 0;
}