#include <iostream>

using namespace std;

int main() {
    int input;

    while (true) {
        cin >> input;

        if (input == 0) {
            break;
        }

        if (input > 0) {
            cout << "POSITIVE" << endl;
        }
        else {
            cout << "NEGATIVE" << endl;
        }

        if (input % 2 == 0) {
            cout << "EVEN" << endl;
        }
        else {
            cout << "ODD" << endl;
        }

        cout << endl;
    }
}