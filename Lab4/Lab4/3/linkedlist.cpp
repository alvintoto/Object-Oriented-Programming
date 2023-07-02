#include <iostream>
#include <fstream>
#include "LinkedList.h"

using namespace std;

int main() {
    ifstream input("input.txt");
    double next_num;

    LinkedList list;

    while (input >> next_num) {
        list.add(new double(next_num));
    }

    LinkedList temp = list;
    while (temp.head != NULL) {
        cout << *(double*) temp.head->data << endl;
        temp.head = temp.head->next;
    }

    // list.print();
    list.cleanup();
}