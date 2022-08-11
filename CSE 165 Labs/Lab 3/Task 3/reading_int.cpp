#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums;
    int input;
    int sum = 0;

    cout << "Input: " << endl;

    while (true) {
        cin >> input;

        if (input == 0) {
            break;
        }
        else if (input > 0) {
            nums.push_back(input);
        }
        else {
            nums.erase(remove(nums.begin(), nums.end(), abs(input)), nums.end());
        }
    }

    cout << endl << "Output: " << endl;

    for (int i = 0; i < nums.size(); ++i) {
        cout << nums[i] << " ";
        sum += nums[i];
    }

    cout << sum << endl;
}