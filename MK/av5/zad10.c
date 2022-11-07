//
// Created by Stefan Andonov on 11/7/22.
//

#include<stdio.h>
int totallyDifferent (int left, int right){
    while(left){
        int leftDigit = left%10;
        // tuka ke gi proveram site cifri od right
        int tmp = right;
        while(tmp){
            int rightDigit = tmp%10;
            if (leftDigit==rightDigit){
                return 0;
            }
            tmp/=10;
        }
        left/=10;
    }

    return 1;
}
int main() {
    int N, X;
    scanf("%d %d", &N, &X);

    for (int i = N - 1; i > 0; i--) {
        if (totallyDifferent(i,X)==1){
            printf("%d", i);
            break;
        }
    }
    return 0;
}
