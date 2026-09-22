#include "sum_partial_harmonic.h"

double sum_partial_harmonic(int n) {

    // your code here
    if(n<1){
        return 0.0;
    }

    double sum = 0.0;
    for(int i=1; i<=n; i++){
        sum += 1.0/i;
    }
    return sum;

}
