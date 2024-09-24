#include <stdio.h>

int main() {
    int amount, notes;
    printf("Enter amount: ");
    scanf("%d", &amount);

    notes = amount / 100;
    printf("Total 100 currency notes: %d\n", notes);

    return 0;
}