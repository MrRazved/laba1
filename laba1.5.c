#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	double a, sum = 0;
	printf("Enter n: ");
	scanf_s("%d", &n);
	printf("Enter a: ");
	scanf_s("%lf", &a);
	for (int i = 0; i <= n; i++)
	{
		sum += 1.0 / pow(a, pow(2, i));
	}
	printf("Sum = %.6lf", sum);
	return 0;
}
