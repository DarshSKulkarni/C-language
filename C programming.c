#include <stdio.h>

// Function prototype
int fib(int n);

int main() {
    int n;
    printf("Please enter your number: ");
    scanf("%d", &n);

    // FIX 1: You must actually call the function in main to run it
    int result = fib(n);
    printf("\nFinal Result: fib of %d is %d\n", n, result);

    return 0;
}

// Recursion function
int fib(int n) {
    // FIX 2: Separate the base cases correctly
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    // Recursive calculations
    int fibnm1 = fib(n - 1);
    int fibnm2 = fib(n - 2);
    int fibn = fibnm1 + fibnm2;
    
    // Optional: Keeps track of the step-by-step processing
    printf("Calculated fib(%d) = %d\n", n, fibn); 
    
    return fibn; 
}
