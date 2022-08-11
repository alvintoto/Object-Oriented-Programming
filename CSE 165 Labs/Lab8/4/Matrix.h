#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>
#include <time.h>
#include <type_traits>
#include "Sortable.h"

using namespace std;

template<typename T>
class Matrix : public Sortable<T> {
    private:
        int rows;
        int cols;
        Sortable<T> data;

    public:
        Matrix(int rows, int cols) {
            this->rows = rows;
            this->cols = cols;

            srand(time(NULL));

            for (int i = 0; i < this->rows * this->cols; ++i) {
                 if (is_same<T, int>::value) {
                    int n = rand() % 100;
                    this->data.push_back(n);
                }
                else {
                    char c = 'a' + rand() % 26;
                    this->data.push_back(c);
                }
            }
        }

        void print() {
            for (int i = 0; i < this->rows * this->cols; ++i) {
                if (i % cols == 0) {
                    cout << endl;
                }
                cout << this->data[i] << " ";
            }

            cout << endl;
        }

        void sort_print() {
            this->data.sort();
            this->print();
        }

        void resize(int n) {
            int new_cols = (this->rows * this->cols) / n;
            for (int i = 0; i < this->rows * this->cols; ++i) {
                if (i % new_cols == 0) {
                    cout << endl;
                }
                cout << this->data[i] << " ";
            }
            cout << endl;
        }
};

#endif