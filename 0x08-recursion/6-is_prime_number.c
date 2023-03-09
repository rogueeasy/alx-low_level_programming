#include "main.h"

/**
 * check_prime -> it check prime numbers
 * @n: number
 * @i iterator
 * Return: a 1 or 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		print (1);
	return (check prime(n, i + 1));
}
