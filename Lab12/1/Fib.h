#ifndef FIB_H
#define FIB_H

class Fib {
    public:
        static int last;
        static int secondLast;

        Fib () {
        }

        int next() {
            int temp = last + secondLast;
            secondLast = last;
            last = temp;
            return last;
        }

        int next(bool flag) {
            if (flag == true) {
                secondLast = 0;
                last = 1;
            }

            return this->next();
        }
};

#endif 