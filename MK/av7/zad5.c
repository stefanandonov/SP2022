//
// Created by Stefan Andonov on 11/14/22.
//

#include<stdio.h>

int main() {
    int array[100];
    int size;
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int k;
    scanf("%d", &k);

    int array2[100];

    for (int i = 0; i < size; i++) {
        array2[(i+k)%size]=array[i];
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", array2[i]);
    }


    return 0;
}

