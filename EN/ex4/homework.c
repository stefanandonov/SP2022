#include <stdio.h>
int main () {
    int KM, P, M, C, D, Z, R;
    float K, V;
    scanf ("%d\n%d %d %f %d\n %d %d %f %d", &KM, &P, &M, &K, &C, &D, &Z, &V, &R);
    int BRZINA_1 = P*M + (P-1)*C + KM/(float)K;
    int BRZINA_2 = D*Z + (D-1)*R + KM/(float)V;
    printf ("%d %d\n", BRZINA_1, BRZINA_2);
    printf ("%d", BRZINA_1<BRZINA_2);
    return 0;
}