#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character
 * @c: Character
 *
 * Return: none
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
