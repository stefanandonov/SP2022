#include<stdio.h>

//#include<math.h>
int main() {
    int i, n;
    float x;
    float y=1;
    scanf("%f %d", &x, &n);
//    printf("%f", pow(x,n));
    // y = x ^ n;
    // y = x*x*x*x*...*x;
    for (i = 1; i <= n; i++) {
        y *= x;
    }

    printf("%.2f", y);
    return 0;
}