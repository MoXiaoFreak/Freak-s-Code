#include<stdio.h>
int main()
{
	int a[100],n, i, j,k;                                //��ʼ��
	scanf("%d", &n);                                 //������������
	for (i = 1;i <= n;i++)
		scanf("%d", &a[i-1]);                      //��������
	for (i = 1;i<n;i++)                               //���Ʋ��������
	{
		k= a[i];                                             //keyΪҪ�����Ԫ��
		for (j = i;j>0 && a[j - 1]>k;j--)      //���Ҳ���λ��
		{
			a[j] = a[j - 1];                          //�ƶ�Ԫ��λ��,������λ
		}
		a[j] = k;                                       //����Ԫ��
		for (j= 0;j<=i;j++)
		{
			printf("%d ", a[j]);                //ÿ�β���󰴸�ʽ���
		}
		printf("\n");
	}
	return 0;
}