#include <stdio.h>

/**
 * pre_main - Prints a message before main is executed.
 * __attribute__((constructor))
 */
void pre_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

