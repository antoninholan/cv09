#include "vektor.h"
#include <math.h>
#include <stdio.h>

struct vector3d operace(struct vector3d u, struct vector3d v, enum typOperace typ) {
    struct vector3d vysledek;

    if (typ == soucet) {
        vysledek.x = u.x + v.x;
        vysledek.y = u.y + v.y;
        vysledek.z = u.z + v.z;
    }
    else if (typ == vektorovySoucin) {
        vysledek.x = (u.y * v.z) - (u.z * v.y);
        vysledek.y = -(u.x * v.z - u.z * v.x);
        vysledek.z = (u.x * v.y) - (v.x * u.y);
    }

    return vysledek;
}

void tisk(struct vector3d u) {
    double size = sqrt(u.x * u.x + u.y * u.y + u.z * u.z);

    printf("w = (%.2f, %.2f, %.2f)\n", u.x, u.y, u.z);
    printf("|w| = %.2f\n", size);
}

double vectorSize(struct vector3d u) {
    return sqrt(u.x * u.x + u.y * u.y + u.z * u.z);
}


int vectorSizeComparison(struct vector3d u, struct vector3d v) {
    double sizeU = vectorSize(u);
    double sizeV = vectorSize(v);

    if (sizeU > sizeV) {
        return 1;
    }
    else if (sizeU < sizeV) {
        return -1;
    }
    else {
        return 0;
    }
}