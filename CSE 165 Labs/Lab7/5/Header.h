#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include "Rect.h"

using namespace std;

class AppWindow {
    public:
        AppRect r;

        AppWindow(int x, int y, int w, int h) {
            this->r = AppRect(x, y, w, h);
        }

        AppWindow(const AppRect& r) {
            this->r = r;
        }

        const AppRect& rect() {
            return this->r;
        }

        virtual void resize(int w, int h) {
        }
};

class CircleWin : public AppWindow {
    public:
        CircleWin(int x, int y, int w, int h) : AppWindow(x, y, w, h) {
        }

        CircleWin(const AppRect& r) : AppWindow(r) {
        }

        void resize(int w, int h) {
            cout << "radius: " << min(w, h) << endl;
        }
};

class RectWin : public AppWindow {
    public:
        RectWin(int x, int y, int w, int h) : AppWindow(x, y, w, h) {
        }

        RectWin(const AppRect& r) : AppWindow(r) {
        }

        void resize(int w, int h) {
            cout << "area: " << w * h << endl;
        }
};

#endif