#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: character to be checked
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c <= 9)
	{
		return (1);
	}
	else
		return (0);
}
