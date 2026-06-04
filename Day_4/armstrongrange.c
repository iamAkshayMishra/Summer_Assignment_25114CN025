#include <stdio.h>
#include <math.h>
int main() {
    int low, high, num, originalNum, remainder, count=0;
    double result = 0.0;
    printf("Enter the lower and upper limits: ");
    scanf("%d %d", &low, &high);
    printf("Armstrong numbers between %d and %d are: ", low, high);
if(high < low){
    high+=low;
    low=high-low;
    high-=low;
}
for(number =low + 1; number < high; ++number){
    originalNum = number;
    
    while (originalNum != 0) {
        originalNum /= 10;
        ++count;
    }
    originalNum = number;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, count);
        originalNum /= 10;
    }
    if ((int)result == number) {
        printf("%d ", number);
    }
    count = 0;
    result = 0.0;
}
return 0;
}