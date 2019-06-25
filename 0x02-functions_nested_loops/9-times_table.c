#include "holberton.h"
/**
 * times_table - Print the table.
 *
 * Return: To void
 */
void times_table(void)
{
int i, j, mult, pr, se;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
mult = i * j;
pr = mult / 10;
se = mult % 10;
if (mult < 10)
{
_putchar(se + '0');
if (j != 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
else
{
_putchar(pr + '0');
_putchar(se + '0');
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
