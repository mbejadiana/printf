#include "main.h"

/**
 * _print_binary - function that prints a binary number from int
 * @ap: the action pointer
 * Return: the binary number
 */

int _print_binary(va_list ap)
{
	int i;
	unsigned int n;
	char *s;
	int count = 0;

	n = va_arg(ap, unsigned int);
	s = convert(n, 2);

	if (!n)
		count += _putchar('0');
	for (i = 0; s[i] && n; i++)
		count += _putchar(s[i]);
	return (count);
}
