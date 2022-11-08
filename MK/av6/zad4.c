#include<stdio.h>

int isAscending(int x) {
    int asc = 1;
    while (x>0){
        int lastDigit = x%10;
        int secondToLastDigit = x/10%10;
        if (secondToLastDigit>=lastDigit){
            asc=0;
            break;
        }
        x/=10;
    }
    return asc;
}

int main() {
    int i, n;
    scanf("%d", &n);

    for (i = n + 1;; i++) {
        if (isAscending(i)){
            printf("%d", i);
            break;
        }
    }
    return 0;
}