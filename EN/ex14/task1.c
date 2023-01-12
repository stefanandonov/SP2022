//
// Created by Stefan Andonov on 1/12/23.
//

#include<stdio.h>
#include<stdlib.h>

int uniqueDigits(int number) {
    int counterArray[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    while (number) {
        int ld = number % 10;
        counterArray[ld]++;
        number /= 10;
    }

    int result = 0;
    for (int i = 0; i < 10; i++) {
        if (counterArray[i]>0){
            ++result;
        }
    }

    return result;
}

int main() {
    int x;
    scanf("%d", &x);
    int n;
    scanf("%d", &n);

    int array [100];
    int j = 0;

    for (int i=0;i<n;i++){
        int number;
        scanf("%d", &number);
        if (uniqueDigits(number)==x){
            array[j++]=number;
        }
    }

    int size = j;

    for(x = 0; x < size - 1; x++){

        for(int y = 0; y < size - x - 1; y++){

            if(array[y] < array[y + 1]){
                int temp = array[y];
                array[y] = array[y + 1];
                array[y + 1] = temp;
            }

        }

    }



    for (int i=0;i<j;i++){
        printf("%d\n", array[i]);
    }

    return 0;
}