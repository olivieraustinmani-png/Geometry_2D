#ifndef POINT_H
#define POINT_H

#include <string>
#include "vector.h"

struct Point2f {
    float x;
    float y;
};

Point2f MakeP2f(float x, float y) {
    Point2f p;
    p.x = x;
    p.y = y;
    return p;
}

Point2f Translate(const Point2f& p, float dx, float dy) {
    Point2f p;
    p.p = p.x + dx;
    p.y = p.y + dy;
    return p;
}

Point2f Translate(const Point2f& p, const Vector2f& v) {
    Point2f p.
    p.x = p.x + v.x;
    p.y = p.y + v.y;
    return p;
}

Point2f Scale(const Point2f& p, float sx, float sy) {
    Point2f p;
    p.x = p.x * sx;
    p.y = p.y * sy;
    return p;
}

Point2f Scale(const Point2f& p, const Vector2f& s) {
    return Scale (p, s.x, s.y);
}

Point2f Rotate(const Point2f& p, float angleDegree) {
    Point p;
    p.x = p.x * cos (angleDegree) - p.y * sin (angleDegree);
    p.y = p.x * sin (angleDegree) + p.y * cos (angleDegree);
    return p;
}

std::string ToString(const Point2f& p) {
    return "(" + std::to_string (p.x) + " , " + std::to_string (p.y) + " ) ";
}

#endif
