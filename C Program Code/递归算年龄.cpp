#include  <stdio.h>
int Age(int n, int a, int k);
int Age(int n, int a, int k)
{
	if (n == 1)
		return a;
	else
		return (Age(n - 1, a, k) + k);//�ݹ�
}
int main()
{
	int n, a, k, ageofn;
	scanf("%d %d %d", &n, &a, &k);//����
	if (n >= 2 && n <= 100 && a > 0 && a <= 100 && k > 0 && k <= 100)//��ȷ�ж�
	{
		ageofn = Age(n, a, k);
		printf("%d ", ageofn);
	}
	else
		printf("Wrong Number.\n");//��������
	return 0;
}
