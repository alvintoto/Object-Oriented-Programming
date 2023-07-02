#include <iostream>

using namespace std;

int main() {
    int input;
    cin >> input;

    for (int i = 1; i <= input; ++i) {
        bool prime = true;

        for (int j = 2; j < i; ++j) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }

        if (prime) {
            cout << i << endl;
        }
    }
}