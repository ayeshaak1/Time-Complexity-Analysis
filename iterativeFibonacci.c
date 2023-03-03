#include "functionPrototypes.h"

/* Calculate the nth Fibonacci number iteratively using an array
 * Input: an integer n
 * Output: the nth Fibonacci number
 */
int iterativeFibonacci(int n){
    // Array of n + 1 elements
    int fibNum[n+1];

    // Fib sequence starts with 0 and 1
    fibNum[0] = 0;
    fibNum[1] = 1;

    // Calculate the remaining fib numbers <= n
    for(int i = 2; i <= n; i++){
        fibNum[i] = fibNum[i-1] + fibNum[i-2];
    }

    return fibNum[n];
}
