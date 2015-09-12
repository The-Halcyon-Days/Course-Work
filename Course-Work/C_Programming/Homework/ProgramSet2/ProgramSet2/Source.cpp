// Homework: Program Set 2
// Name: Erkis Zarabozo
// SID: 836873
//
// Output:The total miles driven per day: 100
// The cost per gallon of gasoline : $3.00
// The average miles per gallon : 19
// The parking fees per day : $3.00
// The tolls per day : $4.00
// Your daily cost of driving to work is $22.79
// Press any key to continue . . .
#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


void main()
{

	float miles;
	printf("The total miles driven per day: ");
	scanf("%f", &miles);
	
	float gasCost;
	printf("The cost per gallon of gasoline: $");
	scanf("%f", &gasCost);

	float milesGallon;
	printf("The average miles per gallon :");	
	scanf("%f", &milesGallon);

	float parkingFees;
	printf("The parking fees per day: $");
	scanf("%f", &parkingFees);

	float tolls;
	printf("The tolls per day: $");
	scanf("%f", &tolls);

	printf("Your daily cost of driving to work is $%0.2f \n", ((miles/milesGallon) * gasCost + parkingFees + tolls));

	system("pause");
}

