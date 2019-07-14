#include <stdio.h>
#include <stdlib.h>

/**
* main - function.
* @argc: Count.
* @argv: Array of arguments
**
* Return: To the value of 1.
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
return (0);
}
