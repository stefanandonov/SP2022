#include<stdio.h>


void twoResults(int x, int *isEven, int *contains5) {
    *isEven = (x % 2 == 0);

    *contains5 = 0;
    while (x) {
        if (x % 10 == 5) {
            *contains5 = 1;
            break;
        }
        x /= 10;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        int number;
        scanf("%d", &number);

        int isEven, contains5;
        twoResults(number, &isEven, &contains5);
        printf("%d -> %d %d", number, isEven, contains5);
    }
    return 0;
}