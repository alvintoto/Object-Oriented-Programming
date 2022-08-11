#include <iostream>
#include <fstream>
#include "Stash.h"

using namespace std;

int main() {
    ifstream input("input.txt");
    double next_num;

    Stash stash;
    stash.initialize(0);
    
    while (input >> next_num) {
        stash.add(&next_num);
    }

    input.close();

    for (int i = 0; i < stash.count(); ++i) {
        cout << *(double*) stash.fetch(i) << endl;
    }

    stash.cleanup();
}