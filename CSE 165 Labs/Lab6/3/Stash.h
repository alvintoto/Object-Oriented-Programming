#ifndef STASH_H
#define STASH_H

#include <iostream>
#include <vector>
#include <cassert>
#include "Vec.h"
#include "Rect.h"

using namespace std;

class RectStash {
    public:
        int size;
        int quantity;
        int next;

        Rect* storage;

        RectStash(int size) {
            this->size = size;
            this->quantity = 0;
            this->storage = 0;
            this->next = 0;
        }

        ~RectStash() {
            if (storage != 0) {
                cout << "freeing storage" << endl;
                delete []storage;
            }
        }

        int add(Rect* r) {
            if(next >= quantity) {
		        inflate(100);
            }

            int startBytes = next * size;
            Rect* e = (Rect*) r;
        
            for(int i = 0; i < size; i++) {
                storage[startBytes + i] = e[i];
            }
            next++;
        
            return (next - 1);
        }

        Rect* fetch(int index) {
            assert(0 <= index);
    
            if(index >= next)
                return 0;
    
            return &(storage[index * size]);
        }

        int count() {
		    return next; 
	    }

        void inflate(int increase) {
            assert(increase > 0);
            
            int newQuantity = quantity + increase;
            int newBytes = newQuantity * size;
            int oldBytes = quantity * size;
            Rect* b = new Rect[newBytes];
            
            for(int i = 0; i < oldBytes; i++)
                b[i] = storage[i]; 
            
            delete []storage; 
            storage = b; 
            quantity = newQuantity;
	    }

        void contains(float a, float b) {
            for (int i = 0; i < this->count(); ++i) {
                if (this->storage[i].contains(Vec(a, b))) {
                    cout << "in ";
                }
                else {
                    cout << "out ";
                }
            }

            cout << endl;
        }
};

#endif