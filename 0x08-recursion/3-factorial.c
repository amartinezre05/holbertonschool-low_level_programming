#include "holberton.h"

/**
* factorial -  returns the factorial of a given number.
* @n: The integer.
*
* Return: To the value of int.
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
