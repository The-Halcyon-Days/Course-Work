//Formatting and Output Program
//Erkis Zarabozo, CS 36
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i;
	float x;
	i = 40;
	x = 859.21;
	printf("|%d|%.5d|%-.5d|%5.3d|\n", i, i, i, i);
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
	system("Pause");

	// Output:
	//	| 40 | 00040 | 00040 | 040 |
	//	| 859.210 | 8.592e+02 | 859.21 |
	//	Press any key to continue . . .

}