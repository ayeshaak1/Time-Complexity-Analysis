# Time-Complexity-Analysis

This repository contains a C program that performs time complexity analysis for various mathematical operations. The program calculates the sum of n odd numbers using both iterative and recursive approaches and also computes the nth Fibonacci number using iterative and recursive methods. It measures the execution time of each operation and provides insights into the efficiency of these algorithms for different input values. The repository aims to analyze the time complexity of these mathematical computations and offer a comparative study of iterative and recursive implementations.

## Getting Started

### Prerequisites

To compile and run the program, ensure that you have a C compiler (e.g., GCC) installed on your system.

### Compilation

Use the following command to compile the program:

```bash
gcc -o time_complexity_analysis main.c functionPrototypes.h -lm
```

## Usage

1. **Sum of n Odd Numbers:**
   - Calculate the sum of the first n odd numbers using an iterative approach and measure the execution time.
   - Calculate the sum of the first n odd numbers using a recursive approach and measure the execution time.

2. **Nth Fibonacci Number:**
   - Calculate the nth Fibonacci number using an iterative approach and measure the execution time.
   - Calculate the nth Fibonacci number using a recursive approach and measure the execution time.

## Execution

To run the program, provide an integer n as a command-line argument. The program will then calculate the sum of n odd numbers and the nth Fibonacci number using both iterative and recursive methods.

Example:

```bash
./time_complexity_analysis 10
```

## Results

The program will display the results of the time complexity analysis, including the sums and Fibonacci numbers, as well as the elapsed time for each operation.
