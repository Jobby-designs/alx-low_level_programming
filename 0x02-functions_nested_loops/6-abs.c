#include "main.h"

/**
 * _abs - to get absolute value
 * @a: interger to be examined
 * Return: 0, always
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = a / -1;
	}
	else
	{
		a = a;
	}
	return (a);
}
