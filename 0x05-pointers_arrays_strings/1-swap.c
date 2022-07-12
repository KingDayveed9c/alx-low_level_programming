#include "main.h"

/**
*swap_int(int *a, int *b)- swaps two integers
*@a: pointer
*@b: pointer
*
*Return: nothing
*/
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
