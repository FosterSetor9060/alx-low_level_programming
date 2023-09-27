#include <stdio.h>

/**
 * main_initials - Prints a message before main is executed....
 * __attribute__((constructor))
 */
void __attribute__ ((constructor)) main_initials()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

