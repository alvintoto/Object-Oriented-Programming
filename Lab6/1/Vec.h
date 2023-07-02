#ifndef VEC_H
#define VEC_H

#include <iostream>

using namespace std;

class Vec {
    public:
        float x;
        float y;

        static Vec null;

        Vec() {
            this->x = 0;
            this->y = 0;
        }

        Vec(float x, float y) {
            this->x = x;
            this->y = y;
        }

        void add(Vec v) {
            this->x += v.x;
            this->y += v.y;
        }

        void print() {
            cout << "x: " << this->x << endl;
            cout << "y: " << this->y << endl;
        }
};

Vec Vec::null = Vec();

#endif