#include <iostream>
#include "Vec.h"
#include "Mat.h"
using namespace std;

int main(int argc, const char * argv[])
{
    Mat a ( Mat::Identity );
    Mat b ( 1.0f, 2.0f, 1.0f, 4.0f );
    
    Vec v = Vec(1,2) * (((a + b) - (a*4)) + a*b);
    cout << v << endl;
    return 0;
}
