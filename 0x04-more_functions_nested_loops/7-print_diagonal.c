#include "main.h"

/**
 * print_diagonal - Check the main file
 * @n: A integer character
 * Description: A function that draws a diagonal line on the terminal
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;

	if (n == 0 || n < 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar('\');
		_putchar('\n');
	}
}
