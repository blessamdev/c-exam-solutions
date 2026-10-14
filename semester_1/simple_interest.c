/*
Author : Blessam
Date : 10/15/2026
Description : Calculate simple interest
*/

#include <stdio.h>

// Function prototype (declaration)
float simple_interest(float principal, float rate, float time);

int main() {
    // Variable declarations
    float p;   // Stores the principal amount
    float r;   // Stores the annual interest rate as a percentage
    float t;   // Stores the time period
    float S_I; // Stores the calculated simple interest

    // Prompt the user to enter the values
    printf("Enter principal, rate and time:\n");
    scanf("%f %f %f", &p, &r, &t);

    // Call the simple_interest() function and store the result
    S_I = simple_interest(p, r, t);

    // Display the calculated simple interest
    printf("Simple Interest = KSH %.2f", S_I);

    return 0;
}

// Function definition
float simple_interest(float principal, float rate, float time) {
    float interest;
    // Calculate simple interest using the formula
    interest = (principal * rate / 100) * time;
    return interest;
}