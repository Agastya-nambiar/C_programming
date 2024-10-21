#include <stdio.h>
int main() {
    int n, a = 0, b = 1, next, sum = 0;
    printf("N in the Fibonacci series: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            next = a; 
        } else if (i == 1) {
            next = b; 
        } else {
            next = a + b; 
            a = b;
            b = next;
        }
        sum += next;
        printf("%d ", next);
    }
    printf("\nSum of the first %d Fibonacci terms: %d\n", n, sum);
    return 0;
}