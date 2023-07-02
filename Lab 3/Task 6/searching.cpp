#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string input;
    string query;
    vector<string> words;
    vector<string> output;

    cout << "Input: " << endl;

    while (true) {
        cin >> input;

        if (input == "quit") {
            break;
        }
        else if (input.length() >= 4) {
            words.push_back(input);
        }
        else if (input.length() == 3) {
            query = input;
        }
    }  

    for (int i = 0; i < words.size(); ++i) {
        int letter_count = 0;
        for (int j = 0; j < 3; ++j) {
            if (words[i][j] == query[j] || words[i][j] == (query[j] - 32)) {
                letter_count++;
            }
        }
        if (letter_count == 3) {
            output.push_back(words[i]);
        }
    }
    
    cout << endl << "Output: " << endl;

    for (int i = 0; i < output.size(); ++i) {
        cout << output[i] << " ";
    }
}