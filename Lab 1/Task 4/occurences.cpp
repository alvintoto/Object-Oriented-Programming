#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string user_input;
    string word;
    int counter = 0;
    ifstream input("words.txt");

    cout << "Enter a word: ";
    cin >> user_input;

    if (input.is_open()) {
        while (input >> word) {
            if (word == user_input) {
                counter += 1;
            }
        }

        input.close();
    }

    cout << counter << " occurences of \"" << user_input << "\"" << endl;
}