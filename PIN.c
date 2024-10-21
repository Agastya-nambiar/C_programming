#include <stdio.h>

int main() {
    int correct_pin = 1234;  // Set the correct 4-digit PIN
    int entered_pin;

    // Ask for the PIN the first time
    printf("Enter your 4-digit PIN: ");
    scanf("%d", &entered_pin);

    // Keep asking for the PIN until the correct one is entered
    while (entered_pin != correct_pin) {
        printf("Incorrect PIN. Please try again.\n");
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &entered_pin);
    }

    printf("PIN accepted. Access granted.\n");

    return 0;
}