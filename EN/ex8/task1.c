//
// Created by Stefan Andonov on 12/6/22.
//

#include<stdio.h>
#include<stdlib.h>
int main() {
    //declaration
    int matrix[100][100];
    int m, n; //row,columns

    //read the matrix
    scanf("%d %d", &m, &n);
    //squared matrix scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sumOfOddColumns = 0;
    int sumOfEvenRow = 0;

    //check every element in the matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            //is the element on an even row
            if (i % 2 == 0) {
                sumOfEvenRow += matrix[i][j];
            }

            //is the element on an odd column
            if (j % 2 == 1) {
                sumOfOddColumns += matrix[i][j];
            }
        }
    }

    printf("%d", abs(sumOfOddColumns-sumOfEvenRow));

    return 0;
}