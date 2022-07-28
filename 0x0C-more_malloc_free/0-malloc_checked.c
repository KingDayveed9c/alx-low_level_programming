#include <stdio.h>

/**
**malloc_checked - allocates memory using malloc
*@b: number of bytes
*
*Return: Pointer
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
return (ptr);
}
