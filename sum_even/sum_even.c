#include "sum_even.h"

int sum_even(int n) {

    // your code here
    if (n < 2) {
        return 0;
    }

    int sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }

    return sum;
}
