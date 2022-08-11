#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x;
    cin >> y;

    int* a = &x;
    int* b = &y;

    cout << *a * *b << endl;
    cout << *a + *b << endl;
    cout << *a - *b << endl;
    cout << *a / *b << endl;
}