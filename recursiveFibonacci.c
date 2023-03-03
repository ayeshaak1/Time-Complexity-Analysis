#include "functionPrototypes.h"

/*
 * Returns the Fibonacci of nth number
 * @param n
 */
int recursiveFibonacci(int n){
    if(n <= 1){
        return n;
    }
    return recursiveFibonacci(n-1) + recursiveFibonacci(n-2);
}

