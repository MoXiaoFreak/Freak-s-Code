#include  <stdio.h>
int main()
{
	char a[100];//����ռ䣬����
	int n, i,k,count=0;

	scanf("%d",&n);
	for (i = 0;i < n;i++)
		scanf("%d",&a[i]);
	scanf("%d", &k);
	//������������
    for (i = 0;i < n;i++)
	{
		if (a[i] == k)
		{
			printf("%d ",i);
			count++;
		}
	}//���λ��
	if (count==0)
		printf("-1");//��һ���ж�����
	return 0;
}
