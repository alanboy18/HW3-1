#include <stdio.h>
#include <stdlib.h>

double Power(double x, int n);

int main(void)
{
	int k;
	double Ans;

	printf("�p��3.5��K����?�п�JK=");
	scanf("%d", &k);
	Ans = Power(3.5, k);
	printf("3.5��%d����=%f", k, Ans);

	system("pause");
	return 0;
}

double Power(double X, int n)
{
	int i;
	double PowerXn = 1;
	for (i = 1; i <= n; i++)
		PowerXn = PowerXn*X;
	return PowerXn;
}