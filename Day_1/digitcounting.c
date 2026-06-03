#include <stdio.h>
int main() {
    long long n, count = 0;
    printf("Enter a number: ");
    scanf("%lld", &n);
    long long original = n;
    if (n == 0) {
        count = 1; 
    } else {
        if (n < 0) {
            n = -n; 
        }
        while (n != 0) {
            n /= 10;
            count++;
        }
    }
    printf("Number of digits in %lld is %lld", original, count);
    return 0;
}