#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @s: points to a string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
		a++;
	return (a);
}
