#include "myMath.h"
#include <stdio.h>

int main(){
    float x;                   
    double sol;  //solution for f(x)
    //show a message requesting a number
    printf("please enter a real number for f(x): \n"); 
    scanf("%f", &x);
    //calculate the function
    sol = Exponent(x);           //sol = e^x
    sol = add(sol, power(x,3));  //sol = e^x + x^3
    sol = sub(sol, 2);           //sol = e^x + x^3 - 2
    printf("f(%0.4lf) = e^x + x^3 - 2 = %0.4lf \n", x, sol);
    sol = power(x,2);            //sol = x^2
    sol = mul(sol,2);            //sol = 2x^2
    sol = add(sol,mul(x,3));     //sol = 3x + 2x^2
    printf("f(%0.4lf) = 3x + 2x^2 = %0.4lf \n", x, sol);
    sol = power(x,3);            //sol = x^3
    sol = mul(sol,4);            //sol = 4x^3
    sol = div(sol,5);            //sol = (4x^3)/5
    sol = sub(sol,mul(x,2));     //sol = (4x^3)/5 - 2x
    printf("f(%0.4lf) = (4x^3)/5 - 2x = %0.4lf", x, sol);
    return 0;
    }
    
