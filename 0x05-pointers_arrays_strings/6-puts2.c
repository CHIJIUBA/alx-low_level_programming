#include "main.h"
/**
 * puts2 - prints a string, followed by anew line,
 * @str: pointer to the string to point
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}

