//
// Created by Stefan Andonov on 12/6/22.
//

#include<stdio.h>

int main() {
    //declaration
    int matrix[100][100];
    int m,n; //row,columns

    //read the matrix
    scanf("%d %d", &m, &n);
    //squared matrix scanf("%d", &m);

    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    //print the matrix
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

