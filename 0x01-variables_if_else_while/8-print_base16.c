#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all the numbers of base 16 in lower case
 * Return: 0
 */
int main(void)
{
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}

	c = 'a';

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
