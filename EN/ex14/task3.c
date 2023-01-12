#include<stdio.h>
#include<ctype.h>
#include<string.h>

void wtf() {
    FILE *f = fopen("matrica.txt", "w");
    char c;
    while ((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int concatenate(int i, int j) {
    if (j < 10) { //j is single digit number
        return i * 10 + j;
    }
    if (j < 100) { //j is a two-digit number
        return i * 100 + j;
    }
    if (j < 1000) { //j is a three-digit number
        return i * 1000 + j;
    }
}

int isIndexElement(int i, int j, int element) {
    return concatenate(i, j) == element;
}

int main() {
    wtf();

    FILE *fp = fopen("matrica.txt", "r");

    int m, n, matrix[120][120];
    fscanf(fp, "%d%d", &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(fp, "%d", &matrix[i][j]);
        }
    }

    for (int j = 0; j < n; j++) { //iteration of columns
        int count = 0;
        for (int i = 0; i < m; i++) { //iteration of elements in the columns
            if (isIndexElement(i,j,matrix[i][j])){
                ++count;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
