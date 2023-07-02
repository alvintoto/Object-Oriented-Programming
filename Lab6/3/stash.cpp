#include <iostream>
#include "Stash.h"
#include "Vec.h"

using namespace std;

int main() {
    RectStash rects(1);
    vector<Vec> points;

    float a = 0, b = 0, c = 0, d = 0;

    while (true) {
        cin >> a >> b >> c >> d;

        if (a < 0 && b < 0 && c < 0 && d < 0) {
            break;
        }
        else {
            Rect r(a, b, c, d);
            rects.add(&r);
        }

    }

    float e = 0, f = 0;

    while (true) {
        cin >> e >> f;

        if (e == -99 && f == -99) {
            break;
        }
        else {
            rects.contains(e, f);
        }
    } 
}