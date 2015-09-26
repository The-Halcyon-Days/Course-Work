//======================================================|
//					Program Set 2						|
//------------------------------------------------------|
//				   -Description-						|
//				Grade Point Converter					|
// Display numerical value of the user's chosen grade   |
// Must be case insensitive								|
// Special Instructions: Use "If", "If-Else", and "Else"|
//------------------------------------------------------|
// Name:	Erkis Zarabozo								|
// ID:      836873										|
// Class:	CS36										|
//======================================================|

#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main()
{
	char grade;

	printf("Enter a grade [ A, B, C, D, F ] : ");
	fflush(stdin);
	scanf(" %c", &grade);
	
	if (grade == 'A' || grade == 'a')
	{
		printf("The score for the grade '%c' is 4.00 \n ", grade);
	}

	if (grade == 'B' || grade == 'b')
	{
		printf("The score for the grade '%c' is 3.00 \n ", grade);
	}

	if (grade == 'C' || grade == 'c')
	{
		printf("The score for the grade '%c' is 2.00 \n ", grade);
	}

	if (grade == 'D' || grade == 'd')
	{
		printf("The score for the grade '%c' is 1.00 \n ", grade);
	}

	if (grade == 'F' || grade == 'f')
	{
		printf("The score for the grade '%c' is 0.00 \n ", grade);
	}

	system("pause");
}


//======================================================|
//						Output							|
//------------------------------------------------------|
// Enter a grade [ A, B, C, D, F ] : C					|
// The score for the grade 'C' is 2.00					|
// Press any key to continue . . .						|
//======================================================|