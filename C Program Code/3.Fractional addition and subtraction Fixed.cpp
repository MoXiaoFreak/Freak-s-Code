#include <stdio.h>
#include <string.h>
int gcd(int a, int b);
int gcd(int a, int b)
{
	int n, i;
	n = a < b ? a : b;
	for (i = a < b ? b : a;i >= 1;i--)
	{
		if (a%n == 0 && b%n == 0)
			break;
	}
	return i;
}
int main() 
{
	int x1,y1;
	int x2,y2;
	printf("输入字母EOF来计算\n");
	char operation;
	char input[999];
	char output[999];
	char *end="EOF";
	while(true)
	{
		scanf("%s",input);
		if (strcmp(input,end) == 0)
		{
			break;
		}
		sscanf(input, "%d/%d%c%d/%d",&x1,&y1,&operation,&x2,&y2);
		x1 *= y2;
		x2 *= y1;
		int result1 = 0; // 结果的分子
		int result2 = 0; //结果的分母
		if (operation == '+')
		{
			result1 = x1 + x2;
		}
		else{
			result1 = x1 - x2;
		}
		result2 = y1 * y2;
		int z =gcd(result1, result2);//最大公约数
		if(result1==result2)
		{
			sprintf(output,"%s\n%d",output,1);
		}
		else if (result1 == 0)
		{
			sprintf(output, "%s\n%d",output,0);
		}
		else
		{
			sprintf(output, "%s\n%d/%d",output,result1/z,result2/z);	  
		}
	}
	printf("%s",output); 
	return 0;
 } 
 //求最大公约数
