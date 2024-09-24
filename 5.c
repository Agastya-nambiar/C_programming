#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);

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