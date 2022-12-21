#include<stdio.h>

int sum(int number) {
    if (number == 1) {
        return 1;
    } else {
        return number + sum(number - 1);
    }
}


long fact(int number) {
    if (number == 1) {
        return 1;
    } else {
        return number * fact(number - 1);
    }
}

long formula (int number){
    if (number==1){
        return 1;
    } else {
        return fact(sum(number)) + formula(number-1);
    }
}


int main() {
    int n;
    scanf("%d", &n);

    printf("%ld", formula(n));
    return 0;
}