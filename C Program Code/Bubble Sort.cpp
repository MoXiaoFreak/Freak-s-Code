#i#include <stdio.h>
void Sort(int a[], int k);
int findFirst(int a[], int n, int value);
void Sort(int a[], int k)
{
	int i, j, t;
	for (j = 1;j <= k - 2;j++)
		for (i = 0;i <= k - 2;i++)
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
int findFirst(int a[], int n, int value)
{
	int z, i;
	for (i = 0;i <= n - 1;i++)
		if (a[i] == value)
			break;
	z = i;
	return z;
}
int main()
{
	int a[10], i,k,j;
	printf("input the number that you want to know its position after sorting:");
	scanf("%d", &j);
	printf("input 10 numbers;");
	for (i = 0;i <= 9;i++)
	{
		scanf("%d", &a[i]);
	}
	Sort(a, 10);
	k = findFirst(a, 10, j);
	printf("%d",k);
	printf("\n");
	return 0;
}
