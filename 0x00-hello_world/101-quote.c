#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * main function display string using write
 */
int main(void)
{
char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
size_t len = strlen(str);

write(STDOUT_FILENO, str, len);

return (0);
}
