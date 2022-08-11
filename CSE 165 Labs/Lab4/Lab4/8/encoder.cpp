#include <iostream>
#include <string>
#include "Stash.h"

using namespace std;

int main() {
    cout << "Input: " << endl;

    int increments;
    cin >> increments;

    Stash stash;
    stash.initialize(1, increments);

    char letter;
    int number;

    while (true) {
        cin >> letter;
        cin >> number;

        if (letter == '&' && number == 99) {
            break;
        }
        else {
            for(int i = 0; i < abs(number); i++) {
                stash.add(&letter);
            }
        }
    }

    cout << endl << "Output: " << endl;
    
    for(int i = 0; i < stash.count(); i++){
        cout << *(char*) stash.fetch(i);
    }

    cout << endl << stash.getInflates() << endl;
    cout << stash.quantity << endl;
    
    stash.cleanup();
}