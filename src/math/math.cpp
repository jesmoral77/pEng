#include "math.h"
#include <cmath>
#include <random>

namespace math {
    float ranFloat() {
        return (float)rand() / RAND_MAX;
    }

}