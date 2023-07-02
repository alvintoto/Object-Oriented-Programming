#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H

#include <iostream>
#include <vector>
#include "Entry.h"

using namespace std;

struct AddressBook {
    vector<Entry*> entries;

    void add(Entry* e) {
        entries.push_back(e);
    }

    void print() {
        cout << endl;
        for (int i = 0; i < entries.size(); ++i) {
            entries[i]->e_print();
        }
    }
};

#endif