#include <stdio.h>

void before() __attribute__((constructor));

void before()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
