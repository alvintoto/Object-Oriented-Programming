#ifndef OBJECT_H
#define OBJECT_H

class Object {
    public:
        static int count;

        Object() {
            this->count++;
        }

        Object(const Object &o) {
            this->count++;
        }
};

#endif