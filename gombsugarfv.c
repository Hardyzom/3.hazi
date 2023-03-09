#include <stdio.h>

float get_double() {
    float szam;
    scanf("%f", &szam);
    return szam;
}

float gomb_felszin(float sugar) {
    return 4 * 3.14 * sugar * sugar;
}

float gomb_terfogat(float sugar) {
    return (4 * 3.14 * sugar * sugar * sugar) / 3;
}

int main() {
    float sugar;
    printf("Kérem adja meg a gömb sugarát: ");
    sugar = get_double();

    printf("Gömb felszíne: %f\n", gomb_felszin(sugar));
    printf("Gömb térfogata: %f\n", gomb_terfogat(sugar));

    return 0;
}







