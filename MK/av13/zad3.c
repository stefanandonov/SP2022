//
// Created by Stefan Andonov on 1/10/23.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {

    FILE *fp = fopen("/Users/stefan.a/CLionProjects/SP2022/MK/av13/text.txt", "r");
    FILE *ofp = fopen("/Users/stefan.a/CLionProjects/SP2022/MK/av13/matrica.txt", "w");

    int m, n;
    float matrix[100][100];

    fscanf(fp, "%d%d", &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(fp, "%f", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            fprintf(ofp, "%.1f ", matrix[j][i]);
        }
        fprintf(ofp, "\n");
    }


    return 0;
}
