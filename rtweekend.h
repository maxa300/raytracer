//
// Created by max on 6/17/25.
//

#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <memory>


// C++ std usings
using std::make_shared;
using std::shared_ptr;

// Constanst
const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.14159265358979323846;

// Utility Functions
inline double degrees_to_radians(double degrees){
    return degrees * pi / 180.0;
}

inline double random_double(){
    return std::rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max) {
    return min + (max-min)*random_double();
}

// Common Headers
#include "color.h"
#include "interval.h"
#include "ray.h"
#include "vec3.h"


#endif //RTWEEKEND_H
