#include <stdio.h>
#include <math.h>

int main()
{
	float a;
	printf("a="); scanf_s("%f", &a);
	if ((-2 <= a)&& (a<= 2))
		printf("f(a)=%f",a*a); else
				printf("f(a)=4");
	return (0);

}
