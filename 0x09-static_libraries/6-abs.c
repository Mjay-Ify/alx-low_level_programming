#include "main.h"
/**
 * _abs - Computes the absolute value
 * of an integer.
 *
 * @n: number to be printed out
 *
 * Return: returns the result of n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
