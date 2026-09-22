#include "leap_year.h"

bool leap_year(int year) {

    // your code here
    if((year%4==0 && year%100!=0) || (year%400==0)){
        return true;
    }

    return false;
}
