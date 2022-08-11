#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> words;
    vector<string> letters;

    string input;
    cout << "Input:" << endl;

    while (true) {
        cin >> input;

        if (input == "quit") {
            break;
        }
        else if (input.length() > 1) {
            words.push_back(input);
        }
        else {
            letters.push_back(input);
        }
    }

    cout << endl << "Output:" << endl;

    for (string letter : letters) {
        for (string word : words) {
            if (letter[0] == word[0] || (letter[0] - 32) == word[0]) {
                cout << word << endl;
            }
        }
    }
}