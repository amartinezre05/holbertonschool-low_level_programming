#include <stdio.h>

/**
* main - function.
* @argc: Count.
* @argv: Array of arguments unused.
*
* Return: To the value of 0.
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	i = 0;
	while (i < argc)
	{
		++i;
	}
	printf("%d\n", i - 1);
return (0);
}
