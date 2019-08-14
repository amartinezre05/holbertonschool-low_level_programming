#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
* _strlen - Returns the length of a string.
* @s: The pointer.
*
* Return: To the value of s.
*/
int _strlen(char *s)
{
int cont;
int i;
i = 0;
cont = 0;
while (s[i] != 0)
{
i++;
}
cont = cont + i;
return (cont);
}
/**
* create_file - function that creates a file.
* @filename: The file.
* @text_content: String.
*
* Return: An int.
*/
int create_file(const char *filename, char *text_content)
{
int fd, wt;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	wt = write(fd, text_content, _strlen(text_content));
	if (wt == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
return (1);
}
