#include "vector.h"

Vector::Vector() {
    this->x = 0;
    this->y = 0;
    this->z = 0;
}

Vector::Vector(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

Vector::Vector(const Vector &vec) {
    this->x = vec.x;
    this->y = vec.y;
    this->z = vec.z;
}
Vector Vector::operator+(const Vector vec2) {
    Vector new_vec;
    new_vec.x = x + vec2.x;
    new_vec.y = y + vec2.y;
    new_vec.z = z + vec2.z;
    return new_vec;
}

Vector Vector::operator*(double n) {
    Vector new_vec;
    new_vec.x = n*x;
    new_vec.y = n*y;
    new_vec.z = n*z;
    return new_vec;
}

void Vector::operator=(Vector vec){
    this->x = vec.x;
    this->y = vec.y;
    this->z = vec.z;
}

double Vector::vec_module(Vector v){
    return sqrt(pow(v.x, 2) + pow(v.y, 2) + pow(v.z, 2));
}

double Vector::dot_prod(Vector v1, Vector v2) {
    double res;
    res = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
    return res;
}

Vector Vector::cross_prod(Vector v1, Vector v2){
    Vector vec_res;
    vec_res.x = v1.y * v2.z - v1.z * v2.y;
    vec_res.y = -1*(v1.x * v2.z - v1.z * v2.x);
    vec_res.z = v1.x * v2.y - v1.y * v2.x;
    return vec_res;
}

