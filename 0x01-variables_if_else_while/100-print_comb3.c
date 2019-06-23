/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
int i;
int j;
for (i = 48; i < 57; i++)
{
for (j = (i + 49); j <= 57; j++)
{
putchar(i);
putchar(j);
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
