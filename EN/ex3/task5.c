#include<stdio.h>

int main() {
    int date;
    scanf("%d", &date);
    int year = date % 10000;
    date /= 10000;
    int month = date % 100;
    int day = date / 100;
    printf("%02d.%02d.%02d", day, month, year);
    return 0;
}