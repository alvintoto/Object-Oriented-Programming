#include <iostream>

using namespace std;

struct s1 {
    char c;
    double d;
};

struct s2 {
    char c1, c2;
    double d;
};

struct s3 {
    char c1, c2, c3;
    double d;
};

struct s4 {
    char c1, c2, c3, c4;
    double d;
};

struct s5 {

};

struct s6 {
    char c1;
    int i;
    char c2;
};

struct s7 {
    char c1, c2;
    int i;
};

int main() {
    cout << sizeof(s1) << endl;
    cout << sizeof(s2) << endl;
    cout << sizeof(s3) << endl;
    cout << sizeof(s4) << endl;
    cout << sizeof(s5) << endl;
    cout << sizeof(s6) << endl;
    cout << sizeof(s7) << endl;
}