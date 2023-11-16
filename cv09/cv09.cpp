
#include "cv09.h"
#include "vektor.h"
#include "conio.h"
#include <stdio.h>

int main() {
    struct vector3d u, v, vysledek;
    enum typOperace operaceType;

    printf("Zadej souradnice prvniho vektoru (x y z): ");
    scanf_s("%lf, %lf, %lf", &u.x, &u.y, &u.z);

    printf("Zadej souradnice druheho vektoru (x y z): ");
    scanf_s("%lf, %lf, %lf", &v.x, &v.y, &v.z);

    printf("Zadej typ operace (soucet = 1, vektorovySoucin = 2): ");
    scanf_s("%d", &operaceType);

    vysledek = operace(u, v, operaceType);

    tisk(vysledek);


    int comparisonResult = vectorSizeComparison(u, v);

    if (comparisonResult == 1) {
        printf("|u| > |v|\n");
    }
    else if (comparisonResult == -1) {
        printf("|u| < |v|\n");
    }
    else {
        printf("|u| = |v|\n");
    }

    getch();
    return 0;
}