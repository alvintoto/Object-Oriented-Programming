#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
    char letter;
    int number;

    vector<pair<char, int>> pairs;

    cout << "Input: " << endl;

    while (true) {
        cin >> letter;
        cin >> number;

        if (number == -2) {
            break;
        }
        else {
            pairs.push_back(make_pair(letter, number));
        }
    }

    cout << endl << "Output: " << endl;

    for (int i = 0; i < pairs.size(); ++i) {
        if (pairs[i].second == -1) {
            cout << endl;
        }
        else {
            for (int j = 0; j < pairs[i].second; ++j) {
                cout << pairs[i].first;
            }
            cout << endl;
        }
    }
}