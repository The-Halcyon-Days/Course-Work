// This program finds the sum and average of 3 numbers
// Erkis Zarabozo, CS 36

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main ()
{
	int a = 0, b = 0, c = 0, sum;
	float avg;
	
	//Input
	printf("Please enter 3 numbers.\n");
	scanf("%d \n %d \n %d", &a, &b, &c);

	//Calculating and processing
	sum = a + b + c;
	avg = sum / 3.0;

	//Output
	printf("Your input is %d, %d, %d. \n", a, b, c);
	printf("The sum is %d.\n", sum);
	printf("The avg is %f.\n", avg);
	system("pause");

	// Output:
	//  Please enter 3 numbers.
	//	10
	//	20
	//	30
	//	Your input is 10, 20, 30.
	//	The sum is 60.
	//	The avg is 20.000000.
	//	Press any key to continue . . .
}