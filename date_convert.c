#include <math.h>

#include "date_convert.h"

int date_convert(int date_number) {

    // your code here
    int num_year = (date_number%10000);
    date_number= date_number/10000;
    int num_month = (date_number%100);
    date_number= date_number/100;
    int num_day = (date_number%100);
    if(num_month<1 || num_month>12){
        return -1;
    }
    if(num_day<1 || num_day>31){
        return -1;
    }
    
    int new_date_number = (num_year*10000)+(num_day*100)+num_month;
    return new_date_number;

}
