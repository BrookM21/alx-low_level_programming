#include "main.h"
/**
 * print_last_digit  - find absolute value
 * @n: integer to hold number
 * Return: abs value of n
 */
int print_last_digit(int n)
{
	int e;

	if (n < 0)
		n = -n;

	e = n % 10;

	if (e < 0)
		e = -e;

	_putchar(e + '0');

	return (e);
}
