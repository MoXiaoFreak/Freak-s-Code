#include<stdio.h>
void input(int *a, int n);
int binsearch(int *a, int n, int value); //�����Ӻ���
int main()
{
	int a[20], n = 0, value;
	int position;
	scanf("%d", &n);//����
	input(a,n); //����
	scanf("%d", &value);//����ֵ
	position = binsearch(a, n, value);//����
	printf("%d\n", position);//���
	return 0;
}
void input(int *a, int n)
{
	int i;
	for (i = 1;i <= n;i++)
		scanf("%d", a+i);
}
int binsearch(int *a, int n, int value)//�۰����
{
	int b = 1, c = n,k;
	k = (b + c) / 2;
	while (b <= c)
	{
		if (*(a + k) == value)//���ҳɹ�
		{
			break;
		}
		if (value<*(a +k))//�������ڲ��ҵ�����������ȡ��
			b = k+ 1;
		else //����С�ڲ��ҵ�����������ȡ��
			c = k- 1;
		k= (b + c) / 2;//ֱ��ȡ������λ��
	}
	return k;
}