/*
Author : Blessam
Date : 10/15/2026
Description : Calculate employee bonus based on their salary and years of service
*/

#include <stdio.h>
#include <string.h>

int main() {
    // Declares a character array to store the employee's name with 100 characters[cite: 4]
    char name[100];

    int yearsOfService;
    int performanceRating;
    int bonus;

    // Prompt the user to enter the employee's name[cite: 4]
    printf("Enter Employee Name: ");

    // Read the employee's full name, including spaces[cite: 4]
    scanf(" %99[^\n]", name);

    // Prompt for years of service[cite: 4]
    printf("Enter Years of Service: ");
    scanf("%d", &yearsOfService);

    // Prompt for performance rating[cite: 4]
    printf("Enter Performance Rating (1-5): ");
    scanf("%d", &performanceRating);

    // Outer if statement checks employee's years of service[cite: 4]
    if (yearsOfService >= 5) {
        // Check whether performance rating is 4 or 5[cite: 4]
        if (performanceRating >= 4) {
            bonus = 50000;
        } else {
            bonus = 30000;
        }
    } else {
        // Check whether performance rating is 4 or 5[cite: 4]
        if (performanceRating >= 4) {
            bonus = 20000;
        } else {
            bonus = 0;
        }
    }

    printf("\nEmployee Name: %s\n", name);
    printf("The Bonus is Ksh %d\n", bonus);

    return 0;
}