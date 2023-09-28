#include "main.h"

/**
 * is_prime_number - ascertain if a num is a prime num
 * @n: integar
 * Return: 1 if prime, if not return 0
 */

int is_prime_number(int n)
{
	int prime_number(int divider, int n);

	int divider = 2;

	if (n < 2)
	{
		return (0);
	}
	if (n % n == 0 || n % 1 == 0)
	{
		if (prime_number(divider, n) != 0)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}

/**
 * prime_number - helper function, take recursive steps
 * @n: number given to check
 * @divider: division result
 * Return: 0 if it is not divisible, else return 1 if it is divisible
 */

int prime_number(int divider, int n)
{
	if (divider < n)
	{
		if (n % divider == 0)
		{
			return (0);
		}
		else
		{
			++divider;
			return (prime_number(divider, n));
		}
	}
	else
	{
		return (1);
	}
}
