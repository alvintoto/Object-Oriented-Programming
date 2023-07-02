#ifndef RECT_H
#define RECT_H

#include <iostream>

class AppRect {
    public:
        float x;
        float y;
        float w;
        float h;

        AppRect() {
            this->x = 0;
            this->y = 0;
            this->w = 0;
            this->h = 0;
        }

        AppRect(float x, float y, float w, float h) {
            this->x = x;
            this->y = y;
            this->w = w;
            this->h = h;
        }
};

#endif