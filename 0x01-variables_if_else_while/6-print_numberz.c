#include <stdio.h>

/**
 * main - print from 0 to 9 using putchar
 * Return: always 0 (success)
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
