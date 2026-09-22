#include <math.h>

#include "hypotenuse.h"

double hypotenuse(double side1, double side2) {

    // your code here
    double hypotenuse_length = sqrt(side1*side1 + side2*side2);
    return hypotenuse_length;

}
