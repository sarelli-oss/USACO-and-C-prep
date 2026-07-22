#include "darts.h"

namespace darts {

// TODO: add your solution here

int score(double x, double y) {

    double distance = x*x + y*y;

    if(distance > 100) {
        return 0;
    }

    else if(distance > 25) {
        return 1;
    }

    else if(distance > 1) {
        return 5;
    }

    else {
        return 10;
    }

}

}  // namespace darts
