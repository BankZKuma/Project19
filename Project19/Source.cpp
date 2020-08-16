#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int gcd(int a, int b)
{
	int min = a < b ? a : b;
	for (int i = min; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			return i;
		}
	}
}
int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d", gcd(a, b));
	return 0;
}
