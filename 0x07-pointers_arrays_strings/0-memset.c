#include "main.h"
/**
 * _memset - fill a block memory with a specific value
 * @s: starting address of a memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * return: 0 always
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

