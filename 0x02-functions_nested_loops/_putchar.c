#include <unistd.h>
/**
 * _putchar _ writes the character c to stdout
 * Return on succcess
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
