#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
* close100 - function that validate
* @fd: int
* Return: void
*/
void close100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
* error97 - function that validate
* Return: void
*/
void error97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
* error98 - function that validate
* @str: char pointer
*
* Return: void
*/
void error98(char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
	exit(98);
}
/**
* error99 - function that validate
* @str: char pointer
*
* Return: void
*/
void error99(char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
	exit(99);
}

/**
* main - function that call another function to copy a file
* @argc: int count of arguments
* @argv: char * that represents of arguments.
*
* Return: int
*/
int main(int argc, char **argv)
{
	int rd, wr, fd1, fd2, cl1, cl2;
	char buff[1024];

	if (argc != 3)
		error97();
	fd1 = open(argv[1], O_RDONLY);
	rd = read(fd1, buff, 1024);
	if (rd == -1 || fd1 == -1)
	{	cl1 = close(fd1);
		if (cl1 == -1)
			close100(cl1);
	error98(argv[1]);
	}
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	wr = write(fd2, buff, rd);
	if (fd2 == -1 || wr == -1)
	{	cl2 = close(fd2);
		if (cl2 == -1)
			close100(cl2);
	error99(argv[2]);
	}
	while (rd == 1024)
	{
		rd = read(fd2, buff, 1024);
		wr = write(fd2, buff, rd);
	}
	cl1 = close(fd1);
	cl2 = close(fd2);
	if (cl1 == -1)
		close100(cl1);
	if (cl2 == -1)
		close100(cl2);
return (0);
}
