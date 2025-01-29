#include <stdio.h>

int main(void) {
    int N, A, B;
    scanf("%d %d %d", N, A, B);

    if (A == B) {
        printf("0\n");
    } else if (A > B) {
        printf("%d\n", B);
    } else {
        printf("%d\n", A);
    }

    return 0;
}