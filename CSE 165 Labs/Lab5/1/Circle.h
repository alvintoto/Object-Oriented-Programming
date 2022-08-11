#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
    private:
        double x;
        double y;
        double r;

    public:
        double area;

    Circle() {
        x = 0;
        y = 0;
        r = 1;
        area = 3.14159 * (r * r);
    }

    Circle(double x, double y, double r) {
        this->x = x;
        this->y = y;
        this->r = r;
        area = 3.14 * (r * r);
    }

    double getX() {
        return x;
    }

    double getY() {
        return y;
    }

    double getR() {
        return r;
    }

    void setX(double x) {
        this->x = x;
    }

    void setY(double y) {
        this->y = y;
    }

    void setR(double r) {
        this->r = r;
    }
};

#endif