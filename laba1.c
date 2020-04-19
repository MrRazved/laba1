#include <stdio.h>
#include <math.h>

int main()
{
	float y, z, a, x;
	double b;
	float t = 1.0 / 3.0;
	printf("x="); scanf_s("%f",&x);
	printf("y="); scanf_s("%f", &y);
	printf("z="); scanf_s("%f", &z);
			a = (powf(fabs(x - 1), 0.5) - powf(fabs(y), t)) / (1 + powf(x, 2) / 2 + powf(y, 2) / 4);
		printf("a=%f\n", a);
	if (z == 1 || z == -1) {
		b = x * (asin(z) + exp(-(x + 3)));
		printf("b=%lf", b);
	}
	else
		printf("b=error!!! Vvedi z -1|1");
	return 0;
}
