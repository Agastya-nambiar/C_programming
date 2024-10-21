#include <stdio.h>
int main() {
    int n, first = 0, second = 1, next, i;
    printf("terms needed: ");
    scanf("%d", &n);
    printf("series: %d ", first, second);
    for (i = 2; i < n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    return 0;
}
