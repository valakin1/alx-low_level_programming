#include "main.h"
/**
 * _strspn - return length of string that matches values consistently
 * @s: string to search
 * @accept: target matches
 *
 * Return: number of bytes consecutively matched
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(s + j) == *(accept + i))
				break;
		}
	if (*(accept + i) == '\0')
		break;
	}
	return (j);
}
