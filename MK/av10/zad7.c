#include<stdio.h>

int nzs(int a, int b, int divisor) {
    if (a == 1 && b == 1) {
        return 1;
    } else {
        if (a % divisor != 0 && b % divisor != 0) {
            return 1 * nzs(a, b, divisor + 1);
        } else {
            if (a % divisor == 0) {
                a /= divisor;
            }
            if (b % divisor == 0) {
                b /= divisor;
            }
            return divisor * nzs(a, b, divisor);
        }
    }
}

int main() {

    int n;
    scanf("%d", &n);

    int niza[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &niza[i]);
    }

    int nzsRez = nzs(niza[0], niza[1], 2);

    for (int i = 2; i < n; i++) {
        nzsRez = nzs(nzsRez, niza[i], 2);
    }

    printf("%d", nzsRez);


    return 0;
}