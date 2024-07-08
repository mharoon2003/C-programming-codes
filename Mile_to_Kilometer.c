#include <stdio.h>

int main() {
    double miles; // Variable to store the distance in miles

    // Prompt the user to enter a distance in miles
    printf("Enter a distance in miles: \n ");
    
    // Read the distance entered by the user
    scanf("%lf", &miles);
    
    // Convert the distance from miles to kilometers
    double kilometers = miles * 1.6;
    
    // Display the converted distance
    printf("%.2f miles is equal to %.2f kilometers.\n", miles, kilometers);

    return 0;
}
