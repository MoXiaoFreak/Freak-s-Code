#include <stdio.h>
int main()
{
	int a,b,i,j,s=0,count=0;
	printf("�������������a b (�������Ϊ1-10000)\n");
	scanf("%d %d",&a,&b);
	if((a<=0)||(a>=b)||(b>10000))
		printf("��������!");
	else
	{
		printf("%d��%d֮����������Ϊ��",a,b);
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
			printf("û��������\n");
	}
	return 0;
}
