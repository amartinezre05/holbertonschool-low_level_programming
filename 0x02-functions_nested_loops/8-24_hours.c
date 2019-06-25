#include "holberton.h"
/**
 * jack_bauer - Print all the hours of the day.
 *
 * Return: To void
 */
void jack_bauer(void)
{
int i, j, k, w;
for (i = 48; i <= 50; i++)
{
for (j = 48; j <= 57; j++)
{
if (i < 51 && j != 52)
{
continue;
for (k = 48; k <= 53; k++)
{
for (w = 48; w <= 57; w++)
{
_putchar(i);
_putchar(j);
_putchar(':');
_putchar(k);
_putchar(w);
_putchar('\n');
}
}
}
}
}
}
