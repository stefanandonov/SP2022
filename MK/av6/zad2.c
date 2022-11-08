#include<stdio.h>

int digits(int x) {
    int counter = 0;
    while (x > 0) {
        counter++;
        x /= 10;
    }
    return counter;
}

int divisor(int x) {
    int counter = 0;
    for (int i=1;i<=x;i++){
        if (x%i==0){
            ++counter;
        }
    }
    return counter;
}

int main() {
//    int number;
//    while (scanf("%d", &number)) {
//        if (divisor(number) == digits(number)) {
//            printf("%d\n", number);
//        }
//    }
    int counter = 0;
    for (int i=0;i<=100000;i++){
        if (divisor(i)== digits(i)){
            printf("%d\n",i);
            ++counter;
        }
    }
    printf("%d", counter);
    return 0;
}