#include <stdio.h>

void kiir_osztok(int szam) {
    printf("Az osztói: ");
    for (int i = 1; i < szam; i++) {
        if (szam % i == 0) {
            printf("%d,", i);
        }
    }
    printf("\b \n");
}

int main() {
    int szam;
    printf("Adj meg egy számot: ");
    scanf("%d", &szam);

    kiir_osztok(szam);

    return 0;
}

