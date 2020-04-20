#include <stdio.h>

int main()
{
	int n, k, sum = 0;
	printf("Enter N: ");
	scanf_s("%d", &n);
	printf("Enter k: ");
	scanf_s("%d", &k);
	for (int i = k; i <= n; i++)
	{
		if ((n % i == 0) && (i % 2 != 0))
		{
		//	printf("%d\n", i); //вывод делителей
			sum ++;
		}
	}
	printf("Sum = %d\n", sum);
	return 0;
}
