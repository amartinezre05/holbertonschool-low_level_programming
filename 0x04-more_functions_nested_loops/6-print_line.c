 #include "holberton.h"

/**
 * print_line - Print a line if the number is positive.
 * @n: The character to be count.
 *
 * Return: To the value of void..
 */
void print_line(int n)
{
int i;
i = 1;
if (n <= 0)
{
_putchar('\n');
}
while (i <= n)
{
_putchar('_');
i++;
}
_putchar('\n');
}
