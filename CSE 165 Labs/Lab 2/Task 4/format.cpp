#include <iostream>

using namespace std;

void to_bin(int n) {
    int binary[32];
    int counter = 0;

    while (n > 0) {
        binary[counter] = n % 2;
        n = n / 2;
        counter++;
    }

    for (int i = counter - 1; i >= 0; --i) {
        cout << binary[i];
    }

    cout << endl;
}

void to_hex(int n) {
    char hex[32];
    int counter = 0;

    while (n > 0) {
        int temp = 0;
        temp = n % 16;

        if (temp < 10) {
            hex[counter] = (char) (temp + 48);
        }
        else {
            hex[counter] = (char) (temp + 55);
        }

        counter++;
        n = n / 16;
    }

    for (int i = counter - 1; i >= 0; --i) {
            cout << hex[i];
        }

        cout << endl;
} 

int main() {
    int input;
   
    while (true) {

        cin >> input;

        if (input > 0) {
            to_bin(input);
            to_hex(input);
            cout << endl;
        }
        else {
            break;
        }
    }
}