#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints the content of a buffer.
 * @b: Pointer to the buffer.
 * @size: Size of the buffer.
 */
void print_buffer(char *b, int size)
{
int i = 0, j = 0;
if (size <= 0)
{
printf("\n");
return;
}

for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);

for (j = i; j < i + 10; j++)
{
if (j < size)
printf("%02x", (unsigned char)b[j]);
else
printf("  ");
if (j % 2 == 1)
printf(" ");
}

for (j = i; j < i + 10; j++)
{
if (j < size)
{
if (isprint(b[j]))
printf("%c", b[j]);
else
printf(".");
}
else
printf(" ");
}
printf("\n");
}
}
