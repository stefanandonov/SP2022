
#include<stdio.h>
#include<math.h>

int main() {
    char letter;
    scanf("%c", &letter);
    int isLower = (letter >= 97) && (letter <= 122); // 1 ako e mala, a 0 vo sprotivno
    printf("%d", isLower);
    return 0;
}
