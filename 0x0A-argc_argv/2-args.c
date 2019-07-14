#include <stdio.h>

/**
* main - function.
* @argc: Count.
* @argv: Array of arguments.
*
* Return: To the value of 0.
*/
int main(int argc, char *argv[])
{
int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
return (0);
}
