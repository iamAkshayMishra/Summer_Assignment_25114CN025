#include <stdio.h>
int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1; // Increment count if the least significant bit is 1
        n >>= 1; // Right shift n by 1 to check the next bit
    }
    return count;
}
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Number of set bits in %d is: %d\n", n, countSetBits(n));
    return 0;
}