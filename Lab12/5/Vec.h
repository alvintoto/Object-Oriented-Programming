#ifndef LA12_Vec_h
#define LA12_Vec_h

#include "Mat.h"

using namespace std;

class Vec {
public:
    float x;
    float y;

    Vec() {
        x = 0;
        y = 0;
    }
    
    Vec (float x, float y) {
        this->x = x;
        this->y = y;
    }

    Vec operator + (const Vec & v) const{
        return Vec(x + v.x, y + v.y);
    }
    
    Vec operator - (const Vec & v) const {
        return Vec(x - v.x, y - v.y);
    }

    Vec operator * (const int & n) const {
        return Vec(x * n, y * n);
    } 

    Vec operator * (const Mat & m) const {
        return Vec((x * m.n1) + (x * m.n2), (y * m.n3) + (y * m.n4));
    }

};

ostream& operator<< (ostream& o, const Vec & v){
    o << "(" << v.x << ", " << v.y << ")";
    return o;
}

#endif