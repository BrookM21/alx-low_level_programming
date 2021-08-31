#include "main.h"
/**
 * _isalpha  - check if letter is lowercase,uppercase or not
 * @c: character to hold letter
 * Return: 1 if lowerOrupper else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
