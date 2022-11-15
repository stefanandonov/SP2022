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

    int ascCounter = 0, descCounter = 0;
    int ascFlag = 1, descFlag = 1;

    for (int i = 0; i < size - 1; i++) { //do size-1 bidejki posledniot element nema sledbenik
//        if (array[i]<array[i+1]){
//            ascCounter++;
//        }
//        if (array[i]>array[i+1]){
//            descCounter++;
//        }
        if (array[i] <= array[i + 1]) {
            descFlag = 0;
        }
        if (array[i] >= array[i + 1]) {
            ascFlag = 0;
        }
    }

//    printf("%d %d", ascCounter, descCounter);

//    if (ascCounter == size - 1) {
//        printf("Ascending");
//    } else if (descCounter == size - 1) {
//        printf("Descending");
//    } else {
//        printf("Nor ascending nor descending");
//    }

    if (ascFlag) {
        printf("Ascending");
    } else if (descFlag) {
        printf("Descending");
    } else {
        printf("Nor ascending nor descending");
    }


    return 0;
}

