//======================================================|
//					Program Set 3						|
//------------------------------------------------------|
//				   -Description-						|
//				Grade Point Converter					|
// Display numerical value of the user's chosen grade   |
// Must be case insensitive								|
// Special Instructions: Use switch statements			|
//------------------------------------------------------|
// Name:	Erkis Zarabozo								|
// ID:      836873										|
// Class:	CS36										|
//======================================================|

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main()
{
	char grade;

	printf("Enter a grade [ A, B, C, D, F ] : ");
	fflush(stdin);
	scanf(" %c", &grade);

	switch (grade)
	{
	
	case 'A' :
	case 'a' :
		printf("The score for the grade '%c' is 4.00 \n ", grade);
		break;
	
	case 'B' :
	case 'b' :
		printf("The score for the grade '%c' is 3.00 \n ", grade);
		break;
	
	case 'C' :
	case 'c' :
		printf("The score for the grade '%c' is 2.00 \n ", grade);
		break;
	
	case 'D' :
	case 'd' :
		printf("The score for the grade '%c' is 1.00 \n ", grade);
		break;
	
	case 'F' :
	case 'f' :
		printf("The score for the grade '%c' is 0.00 \n ", grade);
		break;
	
	default:
		break;
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