#include "holberton.h"
/**
 * print_last_digit - Print the last digit of a number
 * @n: The number to be checked
 *
 * Return: To the value of n
 */
int print_last_digit(int n)
{
if (n < 0)
{
n = -(n % 10);
_putchar(n + '0');
}
else
{
n = n % 10;
_putchar(n + '0');
}
return (n);
}
