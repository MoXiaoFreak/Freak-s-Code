#include<stdio.h> 
int main()
{
	char str[99];                                 //���ַ�������ռ�
	int i, count = 0, word = 0;           //���岢��ʼ�������Ͳ���
	char Char;                                        
	printf("please input a sentence:\n");
	gets_s(str);                                         //�������
	for (i = 0;(Char = str[i]) != '\0';i++) //�������ַ�������ÿ���ַ������ж���ֱ�����һ��\0
	{
		if (Char == ' ')                            //���ĳ���ַ�Ϊ�ո���֮ǰ��Ϊһ������
		count++;
	}
	count++;                                       //ĩ�˵��ʼ���
	printf("%d\n", count);//���
	return 0;
}