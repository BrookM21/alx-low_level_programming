#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s: the pointer;
 * Return: Alwaus 0.
 */

void print_rev(char *s)
{
	int h = -1;

	while (*s)
	{
		h++;
		s++;
	}
	while (h >= 0)
	{
		s--;
		putchar(*s);
		--h;
	}
	putchar('\n');
}
