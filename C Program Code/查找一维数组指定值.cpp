#include  <stdio.h>
int main()
{
	char a[100];//分配空间，定义
	int n, i,k,count=0;

	scanf("%d",&n);
	for (i = 0;i < n;i++)
		scanf("%d",&a[i]);
	scanf("%d", &k);
	//三个输入类型
    for (i = 0;i < n;i++)
	{
		if (a[i] == k)
		{
			printf("%d ",i);
			count++;
		}
	}//输出位置
	if (count==0)
		printf("-1");//另一个判定条件
	return 0;
}
