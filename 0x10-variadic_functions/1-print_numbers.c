#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - a function that prints numbers.
* @n: Constant variable type int.
* @separator: Constant variable type char.
*
* Return: Value of type void.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL && i < n - 1)
		{
		printf("%s", separator);
		}
	}
	printf("\n");
va_end(list);
}
