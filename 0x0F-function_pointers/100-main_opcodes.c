#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Print the opcodes of a memory location.
 * @main_address: The memory location to print opcodes from.
 * @num_bytes: The number of bytes to print.
 */
void print_opcodes(unsigned char *main_address, int num_bytes)
{
	int i = 0;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_address[i]);
		if (i < num_bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}


/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success, 1 on argument error, 2 on negative byte count.
 */
int main(int argc, char *argv[])
{
	int num_bytes;
	unsigned char *main_address;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_address = (unsigned char *)main;
	print_opcodes(main_address, num_bytes);

	return (0);
}
