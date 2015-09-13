// Homework: Program Set 3
// Name: Erkis Zarabozo
// SID: 836873
//
// Output:
// The radius of the circle is : 5
// The diameter of the circle is : 10.00000
// The circumference of the circle is : 78.53975
// The circumference of the circle is : 31.41590
// Press any key to continue . . .

#include <stdio.h>
#include <stdlib.h>


void main()
{
	// Task 1
	char stockName[50];
	int numOfShares;
	float buyingPrice, currentPrice, yearlyFees;

	printf("Please enter the stock name: ");
	gets(stockName);

//	fflush(stdin);

	printf("Please enter the number of shares for that stock: ");
	scanf("%d", &numOfShares);

	printf("Please enter the buying price; current price; and yearly fees :");
	scanf("%f %f %f", &buyingPrice);

	// Task 2
	float initCost = buyingPrice * (float)numOfShares;
	float currentCost = currentPrice * (float)numOfShares;
	float profit = currentPrice - yearlyFees;

	// Task 3
	printf("");


	system("pause");
}