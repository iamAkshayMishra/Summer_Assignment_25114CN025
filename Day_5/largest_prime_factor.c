#include <stdio.h>
#include <math.h>
int getMaxPrimeFactor(int num) {
    int i,max =-1;
    while (num % 2 == 0) {
        max = 2;
        num=num/2;
}
    for (i = 3; i <= sqrt(num); i = i + 2) {
        while (num % i == 0) {
            max = i;
            num = num / i;
        }
    }
    if (num > 2)
        max = num;
    return max;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int largestPrimeFactor = getMaxPrimeFactor(num);
    if (largestPrimeFactor != -1) {
        printf("The largest prime factor of %d is: %d\n", num, largestPrimeFactor);
    } else {
        printf("%d has no prime factors.\n", num);
    }
    
    return 0;
}
