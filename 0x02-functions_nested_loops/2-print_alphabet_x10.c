#include "main.h"
/**
 * print_alphabet_x10 - function to print alphabets
 *
 * Return nothing
 *
 *  print_alphabet_x10 print the alphabets 10 times
 */
void print_alphabet_x10(void)
{
char C;
int i;
for (i = 0 ; i < 10 ; i++)
{
for (C = 'a' ; C <= 'z' ; C++)
_putchar(C);

_putchar('\n');
}
}
