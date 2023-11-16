#pragma once

enum typOperace { soucet = 1, vektorovySoucin };

struct vector3d {
    double x;
    double y;
    double z;

    double x2;
    double y2;
    double z2;
};


struct vector3d operace(struct vector3d u, struct vector3d v, enum typOperace typ);
void tisk(struct vector3d u);

double vectorSize(struct vector3d u);
int vectorSizeComparison(struct vector3d u, struct vector3d v);


