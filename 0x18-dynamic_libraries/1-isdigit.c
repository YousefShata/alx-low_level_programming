#include "main.h"
#include <ctype.h>
/**
 * _isdigit - Check descpriton
 * @c: Input char
 *  Return: 1 if the char is digit 0 if not
 *  _isdigit check if the char c is digit or not
 */
int _isdigit(int c)
{
if (isdigit(c))
return (1);
else
return (0);
}
