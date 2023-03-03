#include "functionPrototypes.h"

/*
 * Returns the sum of first n odd numbers using iterative approach.
 * @param n - the number of odd numbers to sum
 * @return the sum of first n odd numbers
*/
int iterativeSumNOdd(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
	sum += 2 * i - 1;
    }
    return sum;
}



