#include<stdio.h>
#include<ctype.h>
#include<string.h>

void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while ((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();


    FILE *fp = fopen("input.txt", "r");
    int m, n;
    int p, q;
    int matrix[100][100];
    float result[100][100];
    fscanf(fp, "%d%d", &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(fp, "%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            float sum = 0; //vazno e da e tuka inicijalizacija
            int counter = 0; //kolku ima dijagonalni sosedi

            //gore levo
            for (p = i - 1, q = j - 1; p >= 0 && q >= 0; p--, q--) {
                sum+=matrix[p][q];
                ++counter;
            }

            //gore desno
            for (p = i - 1, q = j + 1; p >= 0 && q < n; p--, q++) {
                sum+=matrix[p][q];
                ++counter;
            }

            //dole levo
            for (p = i + 1, q = j - 1; p < m && q >= 0; p++, q--) {
                sum+=matrix[p][q];
                ++counter;
            }

            //dole desno
            for (p = i + 1, q = j + 1; p < m && q < n; p++, q++) {
                sum+=matrix[p][q];
                ++counter;
            }

            result[i][j] = sum / counter;
        }
    }



    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            printf("%.2f ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
