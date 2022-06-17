#include <stdio.h>

/**
 * #include <stdio.h>
 * c: char
 * Return: 0
 */

int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
