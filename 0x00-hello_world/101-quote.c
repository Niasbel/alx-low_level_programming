#include <unistd.h>
/**
 * main - prints and that piece of art is useful
 * - Dora Korpar, 2015-10-19. followed by new line, to the standard error
 *   Return: 1.
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-18,\n", 59);
			return (1);
			}
