#include "main.h"
/**
 * _islower  - check if letter is lowercase or not
 * @c: character to hold letter
 * Return: 1 if lower else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
