#include <stdio.h>

float kor_kerulet(int sugar) {
    return 2 * sugar * 3.14;
}

float kor_terulet(int sugar) {
    return sugar * sugar * 3.14;
}

int main() {
    int sugar;
    printf("Kérem adja meg a kör sugarát: ");
    scanf("%d", &sugar);

    printf("Kör kerülete: %f\n", kor_kerulet(sugar));
    printf("Kör területe: %f\n", kor_terulet(sugar));

    return 0;
}

