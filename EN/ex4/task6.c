#include<stdio.h>

int main() {
    int a, b;
    char operation;
    scanf("%d %c %d", &a, &operation, &b);
//    printf("%d %c %d", a, operation, b);
    switch (operation) {
        case '+':
            printf("%d + %d = %d", a, b, a + b); break;
        case '-':
            printf("%d - %d = %d", a, b, a - b); break;
        case '/':
            if (b == 0) {
                printf("Cannot divide by 0!");
            } else {
                printf("%d / %d = %.2f", a, b, (float) a / b);
            }
            break;
        case '*':
            printf("%d * %d = %d", a, b, a * b); break;
        case '%':
            if (b == 0) {
                printf("Cannot divide by 0!");
            } else {
                printf("%d %% %d = %d", a, b, a % b); break;
            }
            break;
        default:
            printf("Invalid operator!");
    }
    return 0;
}