/* 
Author : Blessam
Date : 10/15/2026
Description : Demonstrate data types and input/output operations
*/


#include <stdio.h>

int main() {
    int a;
    float price;
    double pi;

    char letter;
    char name[7];

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a floating point number: ");
    scanf("%f", &price);

    printf("Enter the value of pi: ");
    scanf("%lf", &pi);

    printf("Enter a letter: ");
    scanf(" %c", &letter);

    printf("Enter your name: ");
    scanf("%6s", name);

    printf("The value of int = %d \n", a);
    printf("The value of float = %.3f \n", price);
    printf("The value of pi = %f \n", pi);
    printf("The character is %c \n", letter);
    printf("My name is %s \n", name);

    return 0;
}