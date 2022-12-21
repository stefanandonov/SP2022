//
// Created by Stefan Andonov on 12/6/22.
//

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int matrix[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    //find the min and max element of the matrix
    int min, max;
    max = min = matrix[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }

    //calculate the difference between max and min
    int diff = max - min;

    //replace the elements on the main diagonal with the diff
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (i==j) {
//                //this element is on the main diagonal
//                matrix[i][j] = diff;
//            }
//        }
//    }

    for (int i = 0; i < n; i++) { //0, 1, 2
        matrix[i][i] = diff; //matrix[0][0], matrix[1][1], matrix[2][2]
    }

    //print the new matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

