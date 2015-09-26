//======================================================|
//					Program Set 4						|
//------------------------------------------------------|
//				   -Description-						|
//			        Calculator  		    			|
// Calculator that can add, subtract, divide, and find  |
// the remainder        								|
// Special Instructions: Use switch statements			|
//------------------------------------------------------|
// Name:	Erkis Zarabozo								|
// ID:   	836873										|
// Class:	CS36										|
//======================================================|

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main()
{
    double firstNum, secNum, result = 0.00;
    char operation = 0;

    printf("\nEnter the calculation\n");
    scanf(" %lf %c %lf", &firstNum, &operation, &secNum);

    switch (operation)
    {
        case '+':
			result = firstNum + secNum;
            printf("= %lf\n", result);
            break;

		case '-':
            result = firstNum - secNum;
            printf("= %lf\n", result);
            break;

		case '*':
			result = firstNum * secNum;
            printf("= %lf\n", result);
            break;

		case '/':
			if (firstNum == 0 || secNum == 0)
			{
				printf("Division by zero error!\n");
				break;
			}

			result = firstNum / secNum;
            printf("= %lf\n", result);
            break;

		case '%':
			if (firstNum == 0 || secNum == 0)
			{
				printf("Division by zero error!\n");
				break;
			}

			result = (int)firstNum % (int)secNum;
            printf("= %d\n", (int)result);
            break;

		default:
			printf("Error");
            break;
    }

    system("pause");
}

//======================================================|
//			       		Output             				|
//------------------------------------------------------|
// Enter the calculation                                |
// 30*30                                                |
// = 900                                                |
// Press any key to continue . . .                      |
//======================================================|
