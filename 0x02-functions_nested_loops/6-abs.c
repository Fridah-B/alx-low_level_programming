#include "main.h"
/**
 * _abs - gives the absolute value of a number
 * @x: number to be entered
 * Return: Always 0 (Success)
 */
int _abs(int x)
{
	if (x < 0)
		return (x * -1);
	else if (x == 0)
		return (0);
	else
		return (x);
}
