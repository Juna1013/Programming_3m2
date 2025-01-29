#include <stdio.h>

int main(void) {
    int N;
    char first[2010];
    char second[2010];
    scanf("%d %d %s", &N, first, second)

    for (int i = 0; i < N; i++) {
        if (first[i] == second[i]) {
            printf("0");
        } else {
            printf("1");
        }
    }

    printf("\n");

    return 0;
}