#include<stdio.h>

int main () {
    int date;
    scanf("%d", &date);
    //1. Gi trgame poslednite 4 cifri sto se odnesuvaat na godinata
    //17102022 / 10000 = 1710
    date/=10000;
    printf("%02d.%02d", date/100, date%100);
    return 0;
}