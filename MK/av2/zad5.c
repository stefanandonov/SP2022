//
// Created by Stefan Andonov on 10/14/22.
//Да се напише програма која ќе ги отпечати
// на екран остатоците при делењето на бројот 19 со 2, 3, 5 и 8.
//
#include<stdio.h>

int main() {
    int number = 19;
    printf("%d %% 2 == %d\n", number, number % 2);
    printf("%d %% 3 == %d\n", number, number % 3);
    printf("%d %% 5 == %d\n", number, number % 5);
    printf("%d %% 8 == %d\n", number, number % 8);
    return 0;
}
