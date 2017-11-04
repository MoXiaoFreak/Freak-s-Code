#include <stdio.h>
int main()
{
	float a;
	printf("Please in put an integer:\n");
	scanf("%f",&a);
	while (int(a) != a)
	{
		printf("Error.Please input an integer!\n");
		scanf("%f", &a);
	}                                                                                           //an integer or not.If not,input again.
	 if (int(a)% 2 == 0)
		printf("Even.\n");
	else
		printf("Odd.\n");
	return 0;
}