#include <math.h>

#include "mow_lawn.h"

int mow_lawn(double width, double length, double speed) {

    // your code here
    if(width<=0 || length<=0 || speed<=0){
        return -1;
    }
    double area = width*length;
    double time = area/(speed*60);
    int time_int = (int)round(time);
    return time_int;
}
