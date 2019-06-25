#include "holberton.h"
/**
* Return the last digit of a number.
*
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
