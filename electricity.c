#include <stdio.h>
int main() {
    float units, total_cost = 0.0;
    printf("Enter the number of units consumed (in kWh): ");
    scanf("%f", &units);
    if (units <= 100) {
        total_cost = units * 1.50;
    } else if (units <= 200) {
        total_cost = (100 * 1.50) + ((units - 100) * 2.00);
    } else {
        total_cost = (100 * 1.50) + (100 * 2.00) + ((units - 200) * 3.00);
    }
    printf("Total cost of electricity: %.2f\n", total_cost);
    return 0;
}