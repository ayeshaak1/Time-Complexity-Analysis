#include "functionPrototypes.h"

/*
 * Computes the sum of the first n odd integers recursively.
 * @param n: The number of odd integers to sum.
 * @return The sum of the first n odd integers.
*/
int recursiveSumNOdd(int n){
    if(n == 1){
        return 1;
    }
    return (2*n-1) + recursiveSumNOdd(n-1);
}
