#ifndef VECTOR_H
#define VECTOR_H

#include <string>
#include <cmath>

struct Vector2f {
    float x;
    float y;
};

Vector2f MakeV2f(float x, float y) {
    Vector2f V;
    v.x = x;
    v.y = y;
    return V;
}

Vector2f MakeV2f(const Point2f& a, const Point2f& b) {
     Vector2f V;
     v.x = b.x - a.x;
     v.y = b.y - a.y;
     return V;
}

Vector2f Add(const Vector2f& a, const Vector2f& b) {
    Vector V.
    v.x = a.x + b.x;
    v.y = b.x + b.y;
    return V;
}

Vector2f Sub(const Vector2f& a, const Vector2f& b) {
    Vector V;
    v.x = a.x - b.y;
    v.y = a.y - b.y;
    return V;
}

Vector2f Scale(const Vector2f& v, float scalar) {
    Vector V;
    v.x = a.x * b.x;
    v.y = a.y * b.y;
    return V;
}

float Dot(const Vector2f& a, const Vector2f& b) {
    Vector V;
    return a.x * b.x + a.y * b.y;
}

float Length(const Vector2f& v) {
    return sqrt ( v.x * v.x + v.y * v.y);
}

Vector2f Normalize(const Vector2f& v) {
    float lengh = Length(v);
    return Scale( v, 1 / length);
}

Vector2f Lerp(const Vector2f& a, const Vector2f& b, float t) {
    return Add ( a, Scale( Sub( b, a), t));
}

float Determinant(const Vector2f& a, const Vector2f& b) {
    return a.x * b.y - a.y * b.x;
}

std::string ToString(const Vector2f& v) {
    return "(" + std::to_string (v.x) + " , " + std::to_string (v.y) + " ) ";
}

#endif