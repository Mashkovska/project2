#include <stdio.h>
#include <math.h>

void main(void)
{
	double a, b, result, x, step, pohubka, dodanok;
	int n;
	printf("vvedit pochatok");
	scanf_s("%lf", &a);
	getchar();
	printf("vvedit kinets");
	scanf_s("%lf", &b);
	getchar();
	printf("vvedit krok");
	scanf_s("%lf", &step);
	getchar();
	printf("vvedit pohubky");
	scanf_s("%lf", &pohubka);
	getchar();

	for (x = a; x <= b; x += step)
	{
		result = 0;
		n = 1;

		do {
			dodanok = 2 * ((pow(x - 1, (2 * n + 1))) / ((2 * n + 1)* pow(x + 1, 2 * n + 1)));
			result = result + dodanok;
			n++;
		} while (dodanok >= pohubka);

		printf("x = %lf result %lf \n", x, result);
	}


	getchar();
}