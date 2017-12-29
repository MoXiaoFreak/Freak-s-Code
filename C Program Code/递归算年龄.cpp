#include  <stdio.h>
int Age(int n, int a, int k);
int Age(int n, int a, int k)
{
	if (n == 1)
		return a;
	else
		return (Age(n - 1, a, k) + k);//递归
}
int main()
{
	int n, a, k, ageofn;
	scanf("%d %d %d", &n, &a, &k);//输入
	if (n >= 2 && n <= 100 && a > 0 && a <= 100 && k > 0 && k <= 100)//正确判定
	{
		ageofn = Age(n, a, k);
		printf("%d ", ageofn);
	}
	else
		printf("Wrong Number.\n");//错误输入
	return 0;
}
