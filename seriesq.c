#include <stdio.h>

int main() {
    int n, i;
    float x, sum = 1.0, term = 1.0; 
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        term = term * x;  // Equivalent to x^i (without using pow)
        if (i % 2 == 0) {
            sum += term;
        } else {
            sum -= term; 
        }
    }
    printf("The sum of the series is: %.2f\n", sum);
    return 0;
}