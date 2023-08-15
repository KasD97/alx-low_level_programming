#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return 0
 */
void times_table(void)
{
	int row = 0;
	int col = 0;
	int prdt = 0;

	for (row = 0; row < 10; row++)
	{
        	_putchar(48);
        	_putchar(44);
         	for (col = 1; col < 10; col++)
        	{
                	prdt = row * col;
               		if ((prdt / 10) > 0)
                	{
                        	_putchar((prdt / 10) + '0');
                	}
                	else
                 	{
                        	_putchar(32);
                 	}
                 	_putchar((prdt % 10) + '0');
                 	if (col < 9)
                 	{
                        	_putchar(44);
                        	_putchar(32);
                	}
        	}
        	_putchar(10);
	}
}
