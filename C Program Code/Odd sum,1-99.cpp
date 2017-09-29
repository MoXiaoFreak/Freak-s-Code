#include <stdio.h>
int main()
{
	int a, sum;
	sum = 0;
	for (a = 1;a <= 99;a++)
	{
		if (a % 2 == 1)
		{
			sum += a;
		}
	}
	printf("%d\n",sum);
	return 0;
}