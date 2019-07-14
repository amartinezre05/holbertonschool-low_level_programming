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
int mult;

	mult = 1;
	if (argc > 1 && argc < 4)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Error");
		printf("\n");
	}
return (1);
}
