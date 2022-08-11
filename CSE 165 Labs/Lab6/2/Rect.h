#ifndef RECT_H
#define RECT_H

#include <iostream>
#include "Vec.h"

class Rect {
    public:
        Vec corner;
        float width;
        float height;

        Rect(float x, float y, float width, float height) {
            this->corner = Vec(x, y);
            this->width = width;
            this->height = height;
        }

        bool contains(Vec v) {
            if (v.x > this->corner.x && v.x < (this->corner.x + width) && v.y < this->corner.y &&
                v.y > (this->corner.y - this->height)) {
                    return true;
                }
            return false;
        }

};

#endif