#include<stdio.h>
void input(int *a, int n);
int binsearch(int *a, int n, int value); //声明子函数
int main()
{
	int a[20], n = 0, value;
	int position;
	scanf("%d", &n);//长度
	input(a,n); //输入
	scanf("%d", &value);//查找值
	position = binsearch(a, n, value);//计算
	printf("%d\n", position);//输出
	return 0;
}
void input(int *a, int n)
{
	int i;
	for (i = 1;i <= n;i++)
		scanf("%d", a+i);
}
int binsearch(int *a, int n, int value)//折半查找
{
	int b = 1, c = n,k;
	k = (b + c) / 2;
	while (b <= c)
	{
		if (*(a + k) == value)//查找成功
		{
			break;
		}
		if (value<*(a +k))//该数大于查找的数，则向上取半
			b = k+ 1;
		else //该数小于查找的数，则向下取半
			c = k- 1;
		k= (b + c) / 2;//直到取到最终位置
	}
	return k;
}