
//Q2

#include <stdio.h>

int main() {
    float distance, fuel_efficiency, fuel_cost_per_liter, avg_speed, fuel_cost, time_required;

    printf("Enter the distance between Delhi and Mumbai (in km): ");
    scanf("%f", &distance);

    printf("Enter the fuel efficiency of your vehicle (km/l): ");
    scanf("%f", &fuel_efficiency);

    printf("Enter the fuel cost per liter: ");
    scanf("%f", &fuel_cost_per_liter);

    printf("Enter the average speed of your vehicle (km/h): ");
    scanf("%f", &avg_speed);

    fuel_cost = (distance / fuel_efficiency) * fuel_cost_per_liter;
    time_required = distance / avg_speed;

    printf("\nThe total distance is: %f km\n", distance);
    printf("The total fuel cost for the trip is: %f\n", fuel_cost);
    printf("The estimated time required for the journey is: %f hours\n", time_required);


}

