#include "holberton.h"

/**
* count - returns the value of y.
* @y: The number to evaluate
* @n: The int of the sqrt.
*
* Return: To the value of int.
*/
int count(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	else if (y * y > n)
	{
		return (-1);
	}
	else
	{
		return (count(n, y + 1));
	}
}
/**
* _sqrt_recursion - returns the value of x raised to the power of y.
* @n: The number to evaluate
*
* Return: To the value of int.
*/
int is_prime_number(int n)
{

