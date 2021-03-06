#ifndef RANDOM_H_
#define RANDOM_H_

#include <cstdlib>
#include <ctime>

class Random {
 public:

    Random() {
        srand(std::time(0));
    }

    Random(int seed) {
        srand(seed);
    }


    int next_int(int n) {
        return int(next_double() * n);
    }

    double next_double() {
        return double(rand()) / RAND_MAX;
    }

};

#endif

