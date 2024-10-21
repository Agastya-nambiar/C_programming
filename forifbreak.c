#include <stdio.h>
int main() {
   int i;
   float number, sum = 0;
      for (i = 1; i <= 10; ++i) {
         printf("Enter n%d: ", i);
         scanf("%f", &number);
         if (number < 0) {
            break;
         }
         sum += number; 
      }
   printf("Sum = %.1f", sum);
   return 0;
}