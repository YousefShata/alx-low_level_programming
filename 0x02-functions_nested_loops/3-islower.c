#include "main.h"
#include <ctype.h>
/**
 * _islower - Check descpriton
 * @c: Input char
 *  Return: 1 if the char is lower case 0 if not
 *  _islower check if the char c lower case or not
 */
int _islower(int c)
{
if (islower(c))
return (1);
else
return (0);
}
