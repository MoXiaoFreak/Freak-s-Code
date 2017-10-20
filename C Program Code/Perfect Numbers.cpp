#include <stdio.h>
int main()
{
	int a,b,i,j,s=0,count=0;
	printf("请输入查找区间a b (最大区间为1-10000)\n");
	scanf("%d %d",&a,&b);
	if((a<=0)||(a>=b)||(b>10000))
		printf("输入有误!");
	else
	{
		printf("%d到%d之间的完数情况为：",a,b);
		for(i=a;i<=b;i++)
		{
			for(j=1;j<=i-1;j++)
			{
				if(i%j==0)
					s=s+j;
			}
			if(s==i)
			{
				printf("%d ",i);
				count++;
			}
		}
		if(count==0)
			printf("没有完数！\n");
	}
	return 0;
}
