#include <stdio.h>
#include <stdlib.h>

/**
* main - function.
* @argc: Count.
* @argv: Array of arguments.
*
* Return: To the value of 1.
*/
int main(int argc, char *argv[])
{
int i, sum;

	sum = 0;
	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
return (0);
}
