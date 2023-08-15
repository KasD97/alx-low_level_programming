#include "main.h"
/**
 * jack_bauer - print every minute of day of jack bauer
 * Return: none
 */
void jack_bauer(void)
{
	int hrs = 0, mins;

	while (hrs < 24)
	{
		mins = 0;
		while (mins < 60)
		{
			_putchar('0' + (hrs / 10));
			_putchar('0' + (hrs % 10));
			_putchar(':');
			_putchar('0' + (mins / 10));
			_putchar('0' + (mins % 10));
			_putchar('\n');
			mins++;
		}
		hrs++;
	}
}
