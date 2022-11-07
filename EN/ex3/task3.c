#include<stdio.h>

int main () {

    int price, rate, months;
    scanf("%d%d%d", &price, &rate, &months);
    float total = price * (1+rate/100.0);
    float installment = total/months;
    printf("Total price: %.2f. Installment amount: %.2f", total, installment);

}