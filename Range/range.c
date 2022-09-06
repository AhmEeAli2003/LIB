/**
 ****************************************************************************************
 *   @file          : range.c
 *   @author        : Ahmed Ali
 *   @brief         : Test range function which located in range header file.
 *	 @date			: 3 / 9 / 2022 
 ****************************************************************************************
*/

/* ****************************** Includes Section Start **************************** */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <range.h> //Add range.h file in C:\MinGW\include to using it as main library.
/* ****************************** Includes Section End **************************** */
	
int main(void)
{
	int Random_Number = 0, Start_Val = 0, End_Val = 0;
	srand(time(NULL));
	
	Random_Number = rand() % 1000 + 1;
	Start_Val = 1;
	End_Val = 1000;
	
	if(range(Random_Number, Start_Val, End_Val))
	{
		printf("Yes \n");
		printf("Random_Number =  %d\n", Random_Number);
		printf("This value is between %d and %d\n", Start_Val, End_Val);
	}
	else
	{
		printf("No \n");
		printf("Random_Number =  %d\n", Random_Number);
		printf("This value is not between %d and %d\n", Start_Val, End_Val);
	}
	return 0;
}