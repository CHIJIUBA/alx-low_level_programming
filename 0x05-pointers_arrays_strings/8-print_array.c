#include "main.h"
/**
 * print_array - print `n` element of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers must be separated by comma and space
 * Numbers should be displayed in the same order they are sorted in array
 * You can only use _putchar to print.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		_putchar("%d", a[i]);
		if (n > 0)
		{
			_putchar(",");
		}
	}
	printf("\n");

}

