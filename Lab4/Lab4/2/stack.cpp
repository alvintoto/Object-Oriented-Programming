#include <iostream>
#include <fstream>
#include "Stack.h"

using namespace std;

int main() {
    ifstream input("input.txt");
    double next_num;
    int stack_size = 0;

    Stack stack;
    stack.initialize();

    while (input >> next_num) {
        stack.push(new double(next_num));
        stack_size++;
    }

    input.close();

    for (int i = 0; i < stack_size; ++i) {
        cout << *(double*) stack.pop() << endl;
    }

    stack.cleanup();
}