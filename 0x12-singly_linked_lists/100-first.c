#include<stdio.h>

/**
 * start_function - Apply the constructor attribute to start_function() so that it
 *   is executed before main()
 */

void start_function(void) __attribute__ ((constructor));

/**
 * start_function - implementation of start_function
 */

void start_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
