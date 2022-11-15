//
// Created by Stefan Andonov on 11/14/22.
//

#include<stdio.h>

int main () {
    int array[100];
    int size;
    scanf("%d", &size);
    for (int i=0;i<size;i++){
        scanf("%d", &array[i]);
    }

    int sumEven = 0, sumOdd = 0;
    int countEven = 0, countOdd = 0;
    for (int i=0;i<size;i++){
        if (array[i]%2==0){
            sumEven+=array[i];
            countEven++;
        } else {
            sumOdd+=array[i];
            countOdd++;
        }
    }

    printf("Sum of even numbers%d:\nSum of odd numbers:%d\nThe ration between the count of even and odd numbers is: %.2f", sumEven, sumOdd, (float)countEven/countOdd);


    return 0;
}

