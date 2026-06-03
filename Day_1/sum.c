#include <stdio.h>
int main() {
    int i,s=0;
    int n=10;
    i=1;
    while(i<=n) {
        s=s+i;
        i++;
    }
    printf("Sum of first %d natural numbers is %d", n, s);
    return 0;
}