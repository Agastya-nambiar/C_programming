//5
#include <stdio.h>

int main() {
    float distance, time, speed;

    printf("Enter the distance traveled (in kilometers): ");

    scanf("%f", &distance);

    printf("Enter the time taken (in hours): ");

    scanf("%f", &time);

    speed = distance / time;

    printf("The speed is: %.2f km/h\n", speed);

    return 0;
}