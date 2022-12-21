#include<stdio.h>

int sumOfHalves(int number) {
    return number / 100 + number % 100;
}

int main() {
    int counter = 0;
    for (int i = 1000; i < 10000; i++) { //will check all 4digit numbers
        if (i % sumOfHalves(i) == 0) {
            printf("%d\n", i);
            ++counter;
        }
    }

    printf("%d", counter);
    return 0;
}