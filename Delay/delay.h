/**
 ****************************************************************************************
 *   @file          : delay.h
 *   @author        : Ahmed Ali
 *   @brief         : Create delay functions in C language using CPU clock.
 *   @date          : 7 / 9 / 2022
 ****************************************************************************************
*/

#ifndef DELAY_H_
#define DELAY_H_

/* ****************************** Includes Section Start **************************** */
#include <time.h>
/* ****************************** Includes Section End **************************** */

/* ****************************** Prototypes Section Start **************************** */
void CPU_Second(double Delay_Time);
void delay_sec(double Second);
void delay_min(double Minute);
void delay_hour(double Hour);
void delay_ms(double Millisecond);
void delay_us(double Microsecond);
void delay_ns(double Nanosecond);
void delay_ps(double Picosecond);
/* ****************************** Prototypes Section End **************************** */

/* ****************************** Sub-Programs Section Start **************************** */

/**
 ****************************************************************************************
 *  @brief          : This function is doing delay time according CPU clock ticks.
 *  @param          : double
 *  @return         : void
 ****************************************************************************************
*/

void CPU_Second(double Delay_Time)
{
	
	/**
	 * ********************** From gnu.org *******************************
     * clock_t is used to measure processor and CPU time.
	 * It may be an integer or a floating-point type. Its values are counts 
	 * of clock ticks since some arbitrary event in the past. 
	 * The number of clock ticks per second is system-specific.
	 * *******************************************************************
	*/
	
	/**
	 * ********************* From cplusplus.com *****************************************
	   * clock_t: Clock ticks are units of time of a constant but system-specific length.
	   **********************************************************************************
	*/
	
	/* ********************** In time.h *******************************
	 * A type for measuring processor time in clock ticks; 
	 * (no need to guard this, since it isn't defined elsewhere).
	 * typedef long clock_t;
	 * ****************************************************************
    */

	clock_t begin;
    double Time_Spent = 0.0;
	
	/*
		The clock function is used to determine the processor time in executing a program or part of a program.
		clock_t clock(void);
		The function returns a value of type clock_t which should be divided by the value of the macro CLOCK_PER_SEC 
		to obtain the processor time in seconds. The function clock () is called at the beginning of program and again 
		at the end of the program and the difference between the values returned gives the time spent by processor 
		on the program.
	*/
	begin = clock();	
	
	while(1)
	{
		/* Get CPU time since loop started */
		Time_Spent = (double)(clock() - begin) / CLOCKS_PER_SEC; /* In time.h --> #define CLOCKS_PER_SEC	((clock_t)(1000))*/
			
		if (Time_Spent >= Delay_Time)
		{
			break;
		}
		
	}
	
}

/**
 ****************************************************************************************
 *  @brief          : delay per second/s function.
 *  @param          : double
 *  @return         : void
 ****************************************************************************************
*/
void delay_sec(double Second)
{
	CPU_Second(Second);
}

/**
 ****************************************************************************************
 *  @brief          : delay per minute/s function.
 *  @param          : double
 *  @return         : void
 ****************************************************************************************
*/
void delay_min(double Minute)
{
	/* Minute = 60 seconds */
	CPU_Second(Minute * 60.0); 
}

/**
 ****************************************************************************************
 *  @brief          : delay per hour/s function.
 *  @param          : double
 *  @return         : void
 ****************************************************************************************
*/
void delay_hour(double Hour)
{
	/* Hour = 3600 seconds */
	CPU_Second(Hour * 3600.0); 
}

/**
 ****************************************************************************************
 *  @brief          : delay per millisecond/s function.
 *  @param          : double
 *  @return         : void
 ****************************************************************************************
*/
void delay_ms(double Millisecond)
{
	/* Millisecond = 0.001 seconds */
	CPU_Second(Millisecond * 0.001); 
}

/**
 ****************************************************************************************
 *  @brief          : delay per microsecond/s function.
 *  @param          : double
 *  @return         : void
 ****************************************************************************************
*/
void delay_us(double Microsecond)
{
	/* Microsecond = 0.000001 seconds */
	CPU_Second(Microsecond * 0.000001); 
}

/**
 ****************************************************************************************
 *  @brief          : delay per nanosecond/s function.
 *  @param          : double
 *  @return         : void
 ****************************************************************************************
*/
void delay_ns(double Nanosecond)
{
	/* Nanosecond = 0.000000001 seconds */
	CPU_Second(Nanosecond * 0.000000001); 
}

/**
 ****************************************************************************************
 *  @brief          : delay per picosecond/s function.
 *  @param          : double
 *  @return         : void
 ****************************************************************************************
*/
void delay_ps(double Picosecond)
{
	/* Picosecond = 0.000000000001 seconds */
	CPU_Second(Picosecond * 0.000000000001); 
}
/* ****************************** Sub-Programs Section End **************************** */
#endif /* DELAY_H_ */	