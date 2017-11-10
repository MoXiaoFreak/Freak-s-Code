#include <stdio.h>
void Sort(int a[],int k);
void Sort(int a[],int k)
{
	int i, j, t;
	for (j = 1;j <= k-2;j++)
		for (i = 0;i <= k-2;i++)
		{
			if (a[i] >= a[i + 1])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	for (i = 0;i <= 9;i++)
		printf("%d   ", a[i]);
}
int main()
{
	int a[10], i;
	for (i = 0;i <= 9;i++)
	{
		scanf("%d", &a[i]);
	}
	Sort(a,10);
	printf("\n");
	return 0;
}
