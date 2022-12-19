#include <stdio.h>
#include "main.h"

/**
 * puts2 - Function prints character of a string
 * @str: pointer parameter
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
