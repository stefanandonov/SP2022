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

    int tmp = array[size-1];
    for (int i = size-1;i>=1;i--){
        array[i]=array[i-1];
    }
    array[0] = tmp;

    for (int i=0;i<size;i++){
        printf("%d ", array[i]);
    }



    return 0;
}

