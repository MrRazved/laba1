#include <stdio.h>

int main()
{
	int n, x, cntr = 0;
	printf("Enter N: ");
	scanf_s("%d", &n);
	printf("Enter n numbers:\n");
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &x);
		if (x % 2 != 0)
		{
			cntr++;
		}
	}
	printf("%d odd numbers\n", cntr);
	return 0;
}
