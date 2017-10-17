#include <stdio.h>
int main()
{
	int amount, number,sum=0;
	int count;
	printf("please type the amount of number sequence you will input:\n");
	scanf("%d",&amount);
	printf("Please input %d numbers:\n",amount);
	for (count = 1;count <= amount;count++)
	{
		scanf("%d", &number);
		sum += number;
	}
	printf("sum=%d", sum);
	return 0;
}