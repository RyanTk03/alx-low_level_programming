#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed. If an error occurs,
 * return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{	
	int file_descriptor = -1;
	char *buffer = NULL;
	ssize_t bytes_read = -1;
	ssize_t bytes_written = -1;
	
	
	if (filename == NULL)
		return 0;

	file_descriptor = open(filename, O_RDONLY)
	if (file_descriptor == -1)
		return 0;

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return 0;
	}

	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return 0;
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || (size_t)bytes_written != (size_t)bytes_read)
	{
		free(buffer);
		close(file_descriptor);
		return 0;
	}

	free(buffer);
	close(file_descriptor);

	return bytes_written;
}

