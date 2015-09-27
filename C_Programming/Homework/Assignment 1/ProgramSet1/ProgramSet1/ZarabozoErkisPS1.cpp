// Homework: Program Set 1
// Name: Erkis Zarabozo
// SID: 836873
//
// Output:
// The radius of the circle is : 5
// The diameter of the circle is : 10.00000
// The circumference of the circle is : 78.53975
// The circumference of the circle is : 31.41590
// Press any key to continue . . .

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void main()
{
	float PI = 3.14159;

	float radius = 0;
	printf("The radius of the circle is: ");
	scanf("%f", &radius);
		
	printf("The diameter of the circle is: %0.5f \n", (radius * 2));

	printf("The circumference of the circle is: %0.5f \n", (PI * (radius * radius)));

	printf("The circumference of the circle is: %0.5f \n", (2 * (PI * radius)));


	system("pause");
}

