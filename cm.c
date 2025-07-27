#include <stdio.h>

int main() {
	    float cm, meters, kilometers;

	        // Input length in centimeters
		     printf("Enter length in centimeters: ");
		         scanf("%f", &cm);
		
		             // Convert to meters and kilometers
		                 meters = cm / 100.0;
		                     kilometers = cm / 100000.0;
		
		                         // Display results
		                             printf("\nLength in meters = %.2f m\n", meters);
		                                 printf("Length in kilometers = %.5f km\n", kilometers);
		
		                                     return 0;
		                                     }
		                                     
