#include <stdio.h>
/**
 * main - entry block
 *
 * Return: 0
 */
int main(void)
{
int n;

n = 0;

for (n = 0; n < 10; n++)
{
	putchar(n % 10 + '0');

	if (n <= 8)
	{
		putchar(',');
		putchar(' ');
	}
	else
	{
		break;
	}

}
putchar('\n');
return (0);
}
