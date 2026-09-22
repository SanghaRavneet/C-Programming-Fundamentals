#include <math.h>

#include "falling_time.h"

int falling_time(int distance) {

    // your code here
    if(distance<0){
        return -1;
    }
    double g = 9.8;
    double time = sqrt((2*distance)/g);
    int time_int = (int)round(time);
    return time_int;
}
