#include<stdio.h> 
int main()
{
	char str[99];                                 //给字符串分配空间
	int i, count = 0, word = 0;           //定义并初始化计数和参数
	char Char;                                        
	printf("please input a sentence:\n");
	gets_s(str);                                         //输入句子
	for (i = 0;(Char = str[i]) != '\0';i++) //遍历该字符串，对每个字符进行判定，直到最后一个\0
	{
		if (Char == ' ')                            //如果某个字符为空格，则之前记为一个单词
		count++;
	}
	count++;                                       //末端单词计数
	printf("%d\n", count);//输出
	return 0;
}