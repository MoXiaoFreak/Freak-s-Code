#include <stdio.h>
void Range(int a);
void Range(int a)
{
	if (a >= 2 && a <= 10)
		printf("YES\n");
	else
		printf("NO\n");
}
int main()
{
	int a;
	printf("Please input a number:\n");
	scanf("%d",&a);
	Range(a);
	return 0;
}