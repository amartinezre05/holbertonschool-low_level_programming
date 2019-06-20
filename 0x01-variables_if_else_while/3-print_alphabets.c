/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
char i;
char u;
i = 'a';
u = 'A';
while (i <= 'z')
{
putchar(i);
i++;
}
while (u <= 'Z')
{
putchar(u);
u++;
}
putchar('\n');
return (0);
}
