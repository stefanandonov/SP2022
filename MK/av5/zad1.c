#include<stdio.h>

int main() {
    //da se soberat prvite N broevi
    int i=1, n;
    int sum = 0;
    scanf("%d", &n);

    //printf("%d", 1+2+3+4+5)
//    for (i = 1; i <= n; i++) { //i=1,2,3,4,...,N
//        sum+=i;
//    }

//    while (i <= n){
//        sum+=i;
//        ++i;
//    }

    while (n>0){
        sum+=n;
        n--;
    }

    printf("%d", sum);
    return 0;
}