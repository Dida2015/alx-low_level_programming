#include "main.h"
/**
 * _memcpy - function that copies the memory area
 * @dest: where memory is stored
 * @src: where memory is copied
 * @n: number of bytes
 *
 * return: copied memory with n bytes change
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int n = 0;
	int r = 0;

	for (; r < 1; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
