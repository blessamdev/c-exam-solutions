/*
Author : Blessam
Date : 10/15/2026
Description : Calculate BMI (Body Mass Index) level based on user input of weight and height.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float weight; 
    float height; 
    float BMI; 

    printf("Enter weight in Kgs and height in Meters:\n");
    scanf("%f %f", &weight, &height);

    BMI = weight / pow(height, 2);

    printf("Your BMI is: %.2f \n", BMI);

    if (BMI < 18.5) {
        printf("Underweight\n");
    }
    else if (BMI >= 18.5 && BMI <= 24.9) {
        printf("Normal weight.\n");
    }
    else if (BMI >= 25.0 && BMI <= 29.9) {
        printf("Overweight\n");
    }
    else {
        printf("Obese\n");
    }

    return 0;
}
