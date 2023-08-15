#include "main.h"
/**
 * _abs - Calculate absolute value of integer
 * @c: Number to be calculated
 * Return: Absolute value of number or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;
		
		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
