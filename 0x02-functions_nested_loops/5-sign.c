#include "holberton.h"
/**
 * print_sign - Return a number depends of the sign.
 * @n: The first character to be evaluated
 *
 * Return: To the value of 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
