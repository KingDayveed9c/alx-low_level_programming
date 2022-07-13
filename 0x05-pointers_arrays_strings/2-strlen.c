#include "main.h"

/**
*_strlen - string length
*@s: pointer
*
*Return: length of string
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
		length++;
return (length);
}
