#include <iostream>
#include <fstream>
#include <string>
#include "Sortable.h"

using namespace std;

int main () {
    Sortable<int> nums;
    Sortable<char> chars;
    Sortable<string> strings;

    ifstream input1("input1.txt");
    int n;
    while (input1 >> n) {
        nums.push_back(n);
    }

    ifstream input2("input2.txt");
    char c;
    while (input2 >> c) {
        chars.push_back(c);
    }

    ifstream input3("input3.txt");
    string s;
    while (input3 >> s) {
        strings.push_back(s);
    }

    nums.sort();
    chars.sort();
    strings.sort();

    for (int i = 0; i < nums.size(); ++i) {
        cout << nums[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < chars.size(); ++i) {
        cout << chars[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < strings.size(); ++i) {
        cout << strings[i] << " ";
    }

    cout << endl;
}