#include <stdio.h>
#include <ctype.h>

int main(void) {
    char S[110];
    scanf("%s", S);
    printf("%c", S[0]);

    for (int i = 1; S[i] != '\0'; i++) {
        printf("%c", toupper(S[i]));
    }

    printf("\n");

    return 0;
}