
#include<stdio.h>
#include<math.h>

int main() {
    int x = 1, y = 2;
    int z = x++ + --y + (x < y);
    // z = x++ + --y + 1;
    // z = 1 + 1 + 0;
    printf("%d", z);
    return 0;
}
