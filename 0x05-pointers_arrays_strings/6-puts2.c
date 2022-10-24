#include "main.h"

/**
 * puts2 - prints other character followed by a new line
 * @str: input
 * Return: characters of the strings
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
