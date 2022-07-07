#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code.
 * @c: An input value
 * Description:: A function that checks for uppercase character.
 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	char i;
	int is_upper = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			is_upper = 1;
	}
	return (is_upper);
}
