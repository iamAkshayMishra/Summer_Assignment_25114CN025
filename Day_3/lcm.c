#include <stdio.h>
int main() {
   int num1, num2, lcm, max;
   printf("Enter two positive integers: ");
   scanf("%d %d", &num1, &num2);
   max = (num1 > num2) ? num1 : num2;
   lcm = max;
   while (1) {
       if (lcm % num1 == 0 && lcm % num2 == 0) {
           break;
       }
       lcm += max;
   }
   printf("LCM of %d and %d is %d", num1, num2, lcm);
   return 0;
}