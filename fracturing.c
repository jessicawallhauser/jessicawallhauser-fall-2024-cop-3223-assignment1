//********************************************************
// fracturing.c 
// Author: Jessica Wallhauser
// Date: 9/5/24
// Class: COP 3223, Professor Parra
// Purpose: This program uses internal functions to help fracture the code to avoid DRY code. 
// Output: Calculates the distance within in a circle.
// //********************************************************


#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Calculating the distance in my code
double calculateDistance() {
    double x1, y1, x2, y2;
//double funciton
    
    // Getting points from the user
    printf("Enter the coordinates for the first point (x1 y1): "); // Asking user for x1 and y1 first
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates for the second point (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Calculating the distance 
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    // Printing the points and distance
    printf("Point 1: (%.2lf, %.2lf)\n", x1, y1);
    printf("Point 2: (%.2lf, %.2lf)\n", x2, y2);
    printf("Distance (diameter) between points: %.2lf\n", distance);

    return distance;
}

// Calculating the perimeter of the circle now using its diameter
double calculatePerimeter(double diameter) {
    double perimeter = PI * diameter;

    printf("Calculated perimeter: %.2lf\n", perimeter);
    
    return perimeter;
}

// Function to calculate the area of the circle using its diameter 
double calculateArea(double diameter) {
    double radius = diameter / 2;
    double area = PI * radius * radius;

    printf("Calculated area: %.2lf\n", area);
    
    return area;
}

// Width of a circle is the same as the diameter
double calculateWidth(double diameter) {
    printf("Circle's width (diameter): %.2lf\n", diameter);
    return diameter;
}

// Height of a circle is also the same as the diameter
double calculateHeight(double diameter) {
    printf("Circle's height (diameter): %.2lf\n", diameter);
    return diameter;
}

int main() {
    // Get the diameter by calculating the distance between two points
    double diameter = calculateDistance();
    
    // Now calculate and display all the properties of the circle
    printf("\n--- Calculating properties of the circle ---\n");
    calculateWidth(diameter);
    calculateHeight(diameter);
    calculatePerimeter(diameter);
    calculateArea(diameter);
    
    return 0;
}
