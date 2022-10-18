#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number that will be printed
 * Return: 1 if it is greater than zero
 * 0 if number given is zero
 * -1 if the number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
