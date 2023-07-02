#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <vector>

using namespace std;

class Data {
    private:
        vector<int> nums;

    public:
        Data() {
        }

        void add(int n) {
            this->nums.push_back(n);
        }

        void print() {
            for (int n : nums) {
                cout << n << " ";
            }
            cout << endl;
        }

        void sort() {
            int j;
            int key;
            for (int i = 1; i < this->nums.size(); ++i) {
                key = this->nums[i];
                j = i - 1;

                while (j >= 0 && this->nums[j] > key) {
                    this->nums[j+1] = this->nums[j];
                    j = j - 1;
                }

                this->nums[j+1] = key;
            }
        }
};

#endif