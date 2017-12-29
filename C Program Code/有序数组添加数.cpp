#include  <stdio.h>
int main()
{
	int a[5] = {1,3,5,7},b,i,j,k;
	scanf("%d", &b);
	for (i = 0;i < 4;i++)
	{
		if (b<a[i])
		{
			k = i;
			break;
		}
	}//定位
	if(k!=4)
	{
		for (j = 4;j >k;j--)
			{
				a[j] = a[j - 1];
			}
	}//后移
	a[k] = b;//替换
	for (int i = 0;i < 5;i++)
		printf("%d ",a[i]);//����
	return 0;
}
