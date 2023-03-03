#include "functionPrototypes.h"
#include <time.h>

int main(int argc, char *argv[]) {
    // Check for correct command line argument
    if (argc != 2) {
        printf("Please input an integer\n");
        return 0;
    }

    int n = atoi(argv[1]);

    // Calculate sum of n odd numbers using iteration
    clock_t start = clock();
    int sumIterative = iterativeSumNOdd(n);
    double elapsedTimeIterativeSum = ((double) (clock() - start)) / CLOCKS_PER_SEC;

    // Calculate sum of n odd numbers using recursion
    start = clock();
    int sumRecursive = recursiveSumNOdd(n);
    double elapsedTimeRecursiveSum = ((double) (clock() - start)) / CLOCKS_PER_SEC;

    // Calculate nth Fibonacci number using iteration
    start = clock();
    int fibonacciIterative = iterativeFibonacci(n);
    double elapsedTimeIterativeFibonacci = ((double) (clock() - start)) / CLOCKS_PER_SEC;

    // Calculate nth Fibonacci number using recursion
    start = clock();
    int fibonacciRecursive = recursiveFibonacci(n);
    double elapsedTimeRecursiveFibonacci = ((double) (clock() - start)) / CLOCKS_PER_SEC;

    // Output results
    printf("***************************\n");
    printf("Sum of 1");
    for (int i = 2; i <= n; i++){
	printf(" + %d", (2 * i) - 1);
    }
    printf("\n");
    printf("Using iteration = %d\n", sumIterative);
    printf("Time elapsed for iterative sum is %lf seconds\n", elapsedTimeIterativeSum);
    printf("Using recursion = %d\n", sumRecursive);
    printf("Time elapsed for recursive sum is %lf seconds\n", elapsedTimeRecursiveSum);
    printf("***************************\n");
    printf("Iteratively, Fibonacci(%d) = %d\n", n, fibonacciIterative);
    printf("Time elapsed for iterative Fibonacci is %lf seconds\n", elapsedTimeIterativeFibonacci);
    printf("Recursively, Fibonacci(%d) = %d\n", n, fibonacciRecursive);
    printf("Time elapsed for recursive Fibonacci is %lf seconds\n", elapsedTimeRecursiveFibonacci);
    printf("***************************\n");

    return 0;
}
