#include <stdio.h>
int main()
{
	unsigned int a;
	int b, i;
	printf("Please input a five-digit integer:\n");
	scanf("%d", &a);
	for (i = 10000;i >=1;i = i / 10)
	{
		b = a / i;
		a = a%i;
		printf("%d      ", b);
	}
	printf("\n");
	return 0;
}