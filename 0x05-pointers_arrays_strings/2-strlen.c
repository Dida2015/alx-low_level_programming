#include "main.h"

/**
 * int _strlen - function that prints length of a string
 * @s: string pointer passed to this function
 * Return: length of string
 */
int _strlen(char *s)
{

int len = 0;
while (*s != '\0')
{
	len ++;1
	s++;
}
return (len);
}
