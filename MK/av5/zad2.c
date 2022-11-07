#include<stdio.h>

int main() {
    //pocetok = 11
    //kraj = 99
    int i, sum = 0;
    //11 + |13 + |15 + |17 + |... + 97 + |99 = 2475
    for (i = 11; i <= 99; i += 2) {
        printf("%d %c ", i, (i==99 ? '=' : '+'));
//        if (i==99) {
//            printf("%d = ", i);
//        } else {
//            printf("%d + ", i);
//        }

        sum+=i;
    }

//    i=10
//    while (i<=98){
//        sum+=i;
//        i+=2;
//    }

//    i=98;
//    while(i>=10){
//        sum+=i;
//        i-=2;
//    }


    printf("%d", sum);
    return 0;
}