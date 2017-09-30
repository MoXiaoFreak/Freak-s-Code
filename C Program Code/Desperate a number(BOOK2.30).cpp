#include <stdio.h>
void desperate(int a);
void desperate(int a)
{
	int i, b;
	for (i = 10000;i >= 1;i /= 10)
	{
		b = a / i;
		a = a%i;
		printf("%d   ", b);
	}
}
int main()
{
	int a;
	printf("Please input a five-digit integer:\n");
	scanf("%d", &a);
	desperate(a);
	printf("\n");
	return 0;
}