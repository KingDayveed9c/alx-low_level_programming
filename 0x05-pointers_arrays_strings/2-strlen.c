#include "main.h"

/**
*_strlen - string length
*@s: pointer
*
*Return: length of string
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
	s++;
	len++;
	}
return (len);
}
