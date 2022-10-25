#include "main.h"
#include <stdio>

/**
 * print_array - prints n elemensts of an array
 * @a: array
 * @n: no of printed values
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}
	printf('\n');
}
