//======================================================|
//					Program Set 1						|
//------------------------------------------------------|
//					Description							|
// Dice Game											|
// Two dice rolled										|
// If total is 7 or 11, player wins						|
// If total is 2 or 12, player loses					|
// Anything else, player "gets their money back"		|
// Special Instructions: Use only "if statements"		|
//------------------------------------------------------|
// Name:	Erkis Zarabozo								|
// ID:      836873										|
// Class:	CS36										|
//======================================================|

#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctime>

void main ()
{
	int dice1, dice2, total;
	srand(time(NULL));

//======================================================|

	dice1 = rand() % (6 + 1);
	dice2 = rand() % (6 + 1);

	total = dice1 + dice2;

	if ( total == 7 ||total == 11 )
	{
		printf("Your sum is %d \n", dice1 + dice2);
		printf("You win! \n");
	}

	if ( total == 2 || total == 12 )
	{
		printf("Your sum is %d \n", dice1 + dice2);
		printf("You lose! \n");
	}

	if ( total != 2 && total != 7 && total != 11 &&  total != 12)
	{
		printf("Your sum is %d \n", dice1 + dice2);
		printf("You get your money back! \n");
	}

//======================================================|

	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;

	total = dice1 + dice2;

	if (total == 7 || total == 11)
	{
		printf("Your sum is %d \n", dice1 + dice2);
		printf("You win! \n");
	}

	if (total == 2 || total == 12)
	{
		printf("Your sum is %d \n", dice1 + dice2);
		printf("You lose! \n");
	}

	if (total != 2 && total != 7 && total != 11 && total != 12)
	{
		printf("Your sum is %d \n", dice1 + dice2);
		printf("You get your money back! \n");
	}

//======================================================|

	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;

	total = dice1 + dice2;

	if (total == 7 || total == 11)
	{
		printf("Your sum is %d \n", dice1 + dice2);
		printf("You win! \n");
	}

	if (total == 2 || total == 12)
	{
		printf("Your sum is %d \n", dice1 + dice2);
		printf("You lose! \n");
	}

	if (total != 2 && total != 7 && total != 11 && total != 12)
	{
		printf("Your sum is %d \n", dice1 + dice2);
		printf("You get your money back! \n");
	}

	system("pause");
}


//======================================================|
//						Output							|
//------------------------------------------------------|
// Your sum is 5										|
// You get your money back!								|
// Your sum is 2										|
// You lose!											|
// Your sum is 11										|
// You win!												|
// Press any key to continue . . .						|
//======================================================|