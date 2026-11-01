//
// Created by reitli on 29.10.2026.
//

#ifndef TSP_POINT_H
#define TSP_POINT_H
#include <math.h>


class Point {
public:
    Point(float x, float y);
    float getX();
    float getY();
private:
    float x, y;
};



#endif //TSP_POINT_H
