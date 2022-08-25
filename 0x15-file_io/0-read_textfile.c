#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a textfile and prints
 * @filename: variable pointer
 * @letters: size letters
 * Description: writes a function that reads a textfile and prints
 * it to the POSIX standard output
 * Return: actual number of letters it could read, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, w;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(finame, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = read(file, text, letters);

	w = write(STDOUT_FILENO, text, let);

	close(file);

	return (w);
}
