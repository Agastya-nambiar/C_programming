#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant >= 0) {
        printf("Root 1 = %.2f\n", (-b + sqrt(discriminant)) / (2 * a));
        printf("Root 2 = %.2f\n", (-b - sqrt(discriminant)) / (2 * a));
    } else {
        printf("The roots are imaginary.\n");
    }

    return 0;
}