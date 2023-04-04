#include "main.h"
/**
 * int _islower - checks for lowercase character
 * Returns: 1 if character is lowercase
 * Returns 0 if character is not lowercase
*/

int _islower(int c)

{
	if  (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
