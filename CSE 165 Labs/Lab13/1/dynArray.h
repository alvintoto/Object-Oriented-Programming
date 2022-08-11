#ifndef DYN_ARRAY_H
#define DYN_ARRAY_H

#include <vector>

using namespace std;

template <typename T>
class DynArray {
    private:
        vector<T> v;

    public:
        DynArray() {

        }

        void add(T t) {
            this->v.push_back(t);
        }

        T operator [](int i) {
            return this->v[i];
        }
};

#endif