#include <stdio.h>
#include <string.h>

int main(void) {
    char a[100];
    char b[100];
    char c[100];

    scanf("%s %s %s", a, b, c);

    if (strcmp(a, "USO") == 0 || strcmp(b, "USO") == 0 || strcmp(c, "USO")) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}