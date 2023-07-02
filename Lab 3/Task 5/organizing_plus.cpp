#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool has_element(vector<vector<string>> V, string s) {
    vector<vector<string>>::const_iterator row;

    for (row = V.begin(); row != V.end(); ++row) {
        if(find(row->begin(), row->end(), s) != row->end()) {
            return true;
        }
    }
    
    return false;
}

int main() {
    string input;
    vector<vector<string>> V(10);

    int char_sum = 0;

    cout << "Input: " << endl;
    
    while (true) {
        cin >> input;

        if (input == "quit") {
            break;
        }
        else {
            if (!has_element(V, input)) {
                V[input.size()-1].push_back(input);
            }
        }

    }

    cout << endl << "Output: " << endl;

    for (int i = 0; i < V.size(); ++i) {
        char_sum = V[i].size() * (i + 1);
        if (char_sum != 0) {
            cout << char_sum << " " << V[i].size() << endl;
        }
    }
}