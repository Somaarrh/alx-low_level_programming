#include <stdio.h>
/**
 * main - main
 * Return: 0
 */
int main(void)
{
	int a;i

	for (a = 0; a < 90; a++)
	{
		putchar(a + '0');
		if (a < 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
i
