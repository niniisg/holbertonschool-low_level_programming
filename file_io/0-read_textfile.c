#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
/**
 *
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t d, o, c;

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		closed(d);
		return (0);
	}
	o = read(d, buffer, letters);
	c = write(STDOUT_FILENO, buffer, o);

	if (c == -1 || o == -1 || o != c)
	{
		close(d);
		free(buffer);
		return (0);
	}
	free(buffer);
	close(d);

	return (c);
}
