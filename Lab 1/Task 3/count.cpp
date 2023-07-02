#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string word;
    int counter = 0;
    ifstream input("words.txt");

    if (input.is_open()) {
        while (input >> word) {
            counter += 1;
        }
        
        input.close();
    }

    cout << counter << " words" << endl;
}