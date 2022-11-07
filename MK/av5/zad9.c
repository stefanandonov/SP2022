#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    int number;
    int sumEven=0, sumOdd=0;
    for (int i=1;i<=n;i++){
        scanf("%d", &number);
        if (i%2==0){
            sumEven+=number;
        } else {
            sumOdd+=number;
        }
    }

    if (abs(sumEven - sumOdd)<10){
        printf("Not great not terrible");
    } else {
        printf("Terrible");
    }

    return 0;
}