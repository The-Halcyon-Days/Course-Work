// Homework: Program Set 3
// Name: Erkis Zarabozo
// SID: 836873


#define _CRT_SECURE_NO_WARNINGS
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
	scanf("%f %f %f", &buyingPrice, &currentPrice, &yearlyFees);

	// Task 2
	float initCost = buyingPrice * (float)numOfShares;
	float currentCost = currentPrice * (float)numOfShares;
	float profit = currentPrice - yearlyFees;

	// Task 3
	printf("|%15s-|%-15.2f-|%-15.2f|%-15.2f|\n", initCost, currentCost, profit);


	system("pause");
}