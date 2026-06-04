#include <stdio.h>
int nthFibonacci(int n) {
    if (n <= 0) {
        return -1; // Invalid input
    } else if (n == 1) {
        return 0; // First Fibonacci term
    } else if (n == 2) {
        return 1; // Second Fibonacci term
    } else {
        int prev1 = 0; // F(1)
        int prev2 = 1; // F(2)
        int curr;
        for (int i = 3; i <= n; i++) {
            curr = prev1 + prev2; // F(n) = F(n-1) + F(n-2)
            prev1 = prev2; // Update for next iteration
            prev2 = curr;
        }
        return curr; // Return the nth Fibonacci term
    }
}