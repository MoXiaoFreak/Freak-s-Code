#include  <stdio.h>
#include <string.h>
void sortChar(char *a, int length);
void sortChar(char *a, int length)
{
	int i, j;
	char t;
	for (i = 0;i < length;i++)
	{
		for (j = 0;j<length;j++)
		{
			if (int(a[j]) > int(a[i]))
			{
				t = a[j];
				a[j] = a[i];
				a[i] = t;
			}//ת������������
		}
	}
	for (i = 0;i < length;i++)
		printf("%c ",a[i]);//���
}
int main()
{
	char a[1000];
	int length = 0;//����
	scanf("%s", &a);
	for (int i = 0;i < 1000;i++)
	{
		if (a[i] != '\0')
			length++;
		else
			break;
	}//���㳤��
	sortChar(a, length);//�����������
	return 0;
}