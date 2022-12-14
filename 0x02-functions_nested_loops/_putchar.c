#include <unistd.h>

/**
 * _putcher - writes the character C to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and the error is set appropriately
 */

int _putchar (char c)

{
	return (write(1, &c, 1));

}
