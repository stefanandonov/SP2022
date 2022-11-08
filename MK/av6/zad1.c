#include<stdio.h>

int main() {
    int i, n; //broj na pixels
    scanf("%d", &n);
    int r, g, b;
    for (i = 0; i < n; i++) {
        scanf("%d%d%d", &r, &g, &b);
        //        if (r<0 || r>255 || g<0 || g>255 || b<0 || b>255){
        //            continue;
        //        }
        if (!((r >= 0 && r <= 255) && (g >= 0 && g <= 255) && (b >= 0 && b <= 255))) {
            continue;
        }

        int max = r;
        if (g > max) {
            max = g;
        }
        if (b > max) {
            max = b;
        }

        if (r<max){
            r = 0;
        }
        if (b<max){
            b = 0;
        }
        if (g<max){
            g = 0;
        }

        printf("%d %d %d\n", r, g, b);

    }
    return 0;
}