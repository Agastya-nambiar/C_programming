#include <stdio.h>

int main() {
    float physics, chemistry, biology, mathematics, computer;
    float total, percentage;
    char grade;

    // Input marks for each subject
    printf("Enter marks for Physics: ");
    scanf("%f", &physics);
    
    printf("Enter marks for Chemistry: ");
    scanf("%f", &chemistry);
    
    printf("Enter marks for Biology: ");
    scanf("%f", &biology);
    
    printf("Enter marks for Mathematics: ");
    scanf("%f", &mathematics);
    
    printf("Enter marks for Computer: ");
    scanf("%f", &computer);

    // Calculate total and percentage
    total = physics + chemistry + biology + mathematics + computer;
    percentage = (total / 500) * 100;

    // Determine grade based on percentage
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 40) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    // Output the percentage and grade
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}