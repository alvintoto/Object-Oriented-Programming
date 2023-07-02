#ifndef MAT_H
#define MAT_H

#include "Vec.h"

class Mat {
public:
    static Mat Identity;
    float n1, n2, n3, n4;

    Mat(float n1, float n2, float n3, float n4) {
        this->n1 = n1;
        this->n2 = n2;
        this->n3 = n3;
        this->n4 = n4;
    }

    Mat operator + (const Mat & m) const {
        return Mat(n1 + m.n1, n2 + m.n2, n3 + m.n3, n4 + m.n4);
    }

    Mat operator - (const Mat & m) const {
        return Mat(n1 - m.n1, n2 - m.n2, n3 - m.n3, n4 - m.n4);
    }

    Mat operator * (const Mat & m) const {
        return Mat((n1 * m.n1) + (n2 * m.n3), (n1 * m.n2) + (n2 * m.n4), (n3 * m.n1) + (n4 * m.n3), (n3 * m.n2) + (n4 * m.n4));
    }

    Mat operator * (const int & x) const {
        return Mat(n1 * x, n2 * x, n3 * x, n4 * x);
    }
};


Mat Mat::Identity = Mat(1, 0, 0, 1);

#endif