#include<stdio.h>

/*
 * 5
 * 1 (-> 1)
 * 2 (-> 2)
 * 3 (-> 0)
 * 4 (-> 1)
 * 5 (-> 2)
 *
 * Output:
 * 0 -> 1
 * 1 -> 2
 * 2 -> 2
 * */
int main() {
    int i, n;
    int number;
    int o0 = 0, o1 = 0, o2 = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &number);
        switch (number % 3) {
            case 0:
                o0++; break;
            case 1:
                o1++; break;
            default: // case 2
                o2++; break;
        }
    }

    printf("0 -> %d\n1 -> %d\n2 -> %d", o0,o1,o2);
    return 0;
}