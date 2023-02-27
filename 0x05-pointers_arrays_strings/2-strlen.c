#include "main.h"

/**
 * int _strlen - function that prints length of a string
 * @s: string pointer passed to this function
 * Return: length of string
 */
int _strlen(char *s)
{

int len;
while (*s != '\0')
{
	len += 1;
	*s = *s + 1;
}
return (len);
}
