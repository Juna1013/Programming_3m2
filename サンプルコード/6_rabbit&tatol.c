#include <stdio.h>

int main(void) {
    int t, g, x, u, v;
    scanf("%d %d %d %d %d", &t, &g, &x, &u, &v);

    int tatol = 0;
    int rabbit = 0;

    if ((t * v + x) >= g) {
        tatol = g;
    } else {
        tatol = t * v + x;
    }

    if ((t * u) >= g) {
        rabbit = g;
    } else {
        rabbit = t * u;
    }

    if (rabbit == tatol) {
        printf("0\n");
    } else if (rabbit > tatol) {
        printf("%d\n", rabbit - tatol);
    } else {
        printf("%d\n", tatol - rabbit);
    }

    return 0;
}