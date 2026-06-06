#include <stdio.h>
#include <math.h>
double power(double b, int e) {
    double pow=1;
    for (int i=0; i<e; i++) {
        pow *= b;
    if (e < 0) {
        return 1/pow;
    }
    return pow;
}
int main() {
    double b;
    int e;
    printf("Enter base and exponent: ");
    scanf("%lf %d", &b, &e);
    printf("%.2lf raised to the power of %d is: %.2lf\n", b, e, power(b, e));
    return 0;
}