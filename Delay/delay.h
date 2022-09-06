#include <stdio.h>
#include <time.h>

void CPU_Second(double Second);
void delay_sec(double Second);


void CPU_Second(double Second)
{
	clock_t begin;
    double Time_Spent;
    unsigned int CPU_Second_Indicator = 0;
	
	begin = clock();	
	
	while(1)
	{
		/* Get CPU time since loop started */
		Time_Spent = (double)(clock() - begin) / CLOCKS_PER_SEC;
			
		if (Time_Spent >= Second)
		{
			break;
		}
		
		CPU_Second_Indicator++;
	}
	
}


void delay_sec(double Second)
{
	CPU_Second(Second);
}	