#include "main.h"
/**
 * string_toupper - changes all lower case to uppercase
 * @n: pointer
 * Return: always 0
 */
char *string_toupper(char *)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
