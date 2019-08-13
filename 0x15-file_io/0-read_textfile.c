#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
* read_textfile - function that reads a text file and prints it to the std.
* @filename: The file.
* @letters: Number of letters.
*
* Return: The number of letters.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, rd, wt;
char *tmp;

	if (filename == NULL)
		return (0);
	tmp = malloc(sizeof(char) * letters);
	if (tmp == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	rd = read(fd, tmp, letters);
	if (rd == -1)
		return (0);
	wt = write(STDOUT_FILENO, tmp, rd);
	if (wt == -1)
		return (0);
	close(fd);
	free(tmp);
return (wt);
}
