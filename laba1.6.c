#include <stdio.h>
#include <math.h>

int fact(int k)
{
	if (k == 0)
	{
		return 1;
	}
	else
	{
		return k * fact(k - 1);
	}
}

int main()
{
	int n;
	double x, prod = 1;
	printf("Enter n: ");
	scanf_s("%d", &n);
	printf("Enter x: ");
	scanf_s("%lf", &x);
	for (int i = 1; i <= n; i++)
	{
		prod *= (pow(1 - x, i + 1) + 1) / pow(fact(i - 1) + 1, 2.0);
	}
	printf("Prod = %.6lf", prod);
	return 0;
}
