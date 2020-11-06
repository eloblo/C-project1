#include "myMath.h"
#include <stdio.h>

double Exponent(int x){ //e^x
    int i;
    double ans = 1;
    for(i = 0; i < x; i++){  //loop x times
       ans *= E;             //and multiply by e each time
       }
    }   

double power(double x, int y){  //x^y
    int i;
    double ans = 1;
    for(i = 0; i < y; i++){ //loop y times
       ans *= x;            //and multiply by e each time
       }
    return ans;
    }
