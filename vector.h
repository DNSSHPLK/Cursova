#ifndef VECTOR_H
#define VECTOR_H

#include <qmath.h>

class Vector
{
public:
    double x, y, z;
    Vector();
    Vector(double x, double y, double z);
    Vector(const Vector& vec);
    Vector operator + (Vector vec2);
    Vector operator * (double n);
    void operator = (Vector vec);

    static double vec_module(Vector v);
    static double dot_prod(Vector v1, Vector v2);
    static Vector cross_prod(Vector v1, Vector v2);
};

#endif // VECTOR_H
