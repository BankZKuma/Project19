#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	for (a = 1; a <= 1000; a++)
	{
		for (b = 1; b <= 1000; b++)
		{
			for (c = 1; c <= 1000; c++)
			{
				if (a + b + c == 1000)
				{
					if (a <= b && b <= c)
					{
						if (pow(a, 2) + pow(b, 2) == pow(c, 2))
						{
							printf("%d %d %d\n", a, b, c);
						}
					}
				}
			}
		}
	}
	printf("%d", a * b * c);
	return 0;
}