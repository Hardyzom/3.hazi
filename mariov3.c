#include <stdio.h>

int main() {
    int magassag, i, j;

    printf("Kérem a magasságot: ");
    scanf("%d", &magassag);

    for (i = 0; i < magassag; i++) {
        for (j = 0; j < magassag - i - 1; j++) {
            printf(" ");
        }
        for (j = 0; j < i + 1; j++) {
            printf("#");
        }
        printf("  ");
        for (j = 0; j < i + 1; j++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
