#include <stdio.h>
int factorial(int n) {
    int i, fact = 1;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int main (void) {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int i=n;
    while(i!=0) {
        sum += factorial(i % 10);
        i /= 10;
    }
    if (sum == n) {
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }
    return 0;
}