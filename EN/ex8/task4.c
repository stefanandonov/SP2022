//
// Created by Stefan Andonov on 12/6/22.
//

#include<stdio.h>
#include<stdlib.h>

int main() {
    //declaration
    int matrix[100][100];
    int result[10000];
    int m, n; //row,columns

    int tracker = 0;

    //read the matrix
    scanf("%d %d", &m, &n);
    //squared matrix scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            //for every element in the row check the number of occurrences in the row
            int count = 0;
            for (int k = 0; k < n; k++) {
                if (matrix[i][j] == matrix[i][k]) {
                    ++count;
                }
            }

            if (count == 1) {
//                printf("%d ", matrix[i][j]);
                result[tracker] = matrix[i][j];
                ++tracker;
            }
//            printf("%d %d %d -> %d\n", i, j, matrix[i][j], count);
        }
    }

    for (int i = 0; i < tracker; i++) {
        printf("%d ", result[i]);
    }


    return 0;
}