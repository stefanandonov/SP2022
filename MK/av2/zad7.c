//
// Created by Stefan Andonov on 10/14/22.
//Да се напише програма која од СВ ќе прочита два цели броеви
// и ќе ја испечати на компјутерскиот екран нивната
// сума, разлика, производ и остатокот при делењето.
//
#include<stdio.h>
#include<math.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d %% %d = %d\n", a, b, a % b);
    return 0;
}
