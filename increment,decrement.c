#include <stdio.h>

int main()
{
    int x = 5;
    x++;                                  // Increment x by 1
    printf("x after increment: %d\n", x); // Output: 6
    x--;                                  // Decrement x by 1
    printf("x after decrement: %d\n", x); // Output: 5
    return 0;
}

#include <stdio.h>
int main()
{
    int a = 10;

    a += 5;                          // Equivalent to a = a + 5
    printf("a after += 5: %d\n", a); // Output: 15

    a *= 2;                          // Equivalent to a = a * 2
    printf("a after *= 2: %d\n", a); // Output: 30

    return 0;
}