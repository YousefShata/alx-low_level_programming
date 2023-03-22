#include "main.h"
/**
 * jack_bauer - Check descpriton
 *  Return: Nothing
 * jack_bauer : print every minute of the day
 */
void jack_bauer(void)
{
int i, y;

for (i = 0; i < 24; i++)
{
for (y = 0; y < 60; y++)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar(':');
_putchar((y / 10) + '0');
_putchar((y % 10) + '0');
_putchar('\n');
}
}
}
