#include "main.h"
/**
 * _isdigit - check if parameter is a digit
 *
 * @c: parameter
 * Return: 1 if it is a number and 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

}
