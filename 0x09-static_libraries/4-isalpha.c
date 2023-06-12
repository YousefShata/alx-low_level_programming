#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Check descpriton
 * @c: Input char
 *  Return: 1 if the char is alpha 0 if not
 *  _isalpha check if the char c alpha or not
 */
int _isalpha(int c)
{
if (isalpha(c))
return (1);
else
return (0);
}
