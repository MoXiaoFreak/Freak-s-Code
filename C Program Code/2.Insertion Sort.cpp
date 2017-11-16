#include<stdio.h>
int main()
{
	int a[100],n, i, j,k;                                //初始化
	scanf("%d", &n);                                 //输入数字数量
	for (i = 1;i <= n;i++)
		scanf("%d", &a[i-1]);                      //输入数字
	for (i = 1;i<n;i++)                               //控制插入的数字
	{
		k= a[i];                                             //key为要插入的元素
		for (j = i;j>0 && a[j - 1]>k;j--)      //查找插入位置
		{
			a[j] = a[j - 1];                          //移动元素位置,留出空位
		}
		a[j] = k;                                       //插入元素
		for (j= 0;j<=i;j++)
		{
			printf("%d ", a[j]);                //每次插入后按格式输出
		}
		printf("\n");
	}
	return 0;
}