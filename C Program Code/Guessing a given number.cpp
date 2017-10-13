#include <stdio.h>
int main()
{
	int basenumber = 5,input,result;
	printf("There is a random(HA?) number.Please input a number(an integer) to guess it:\n");
	scanf("%d",&input);
	if (input > basenumber)
		result = 1;
	else if (input == basenumber)
		result = 0;
	else if (input < basenumber)
		result = -1;
	printf("result=%d\n",result);
	printf("If result=1,it means the number you input is bigger than the base one,and 0 means you are so lucky to guess the number;-1 means smaller than the base one\n");
	/*
	switch (result)
	{
	    case 1:
		{
			printf("bigger than base number\n");
			break;
		}
		case 0:
		{
			printf("equal to base number\n");
			break;
		}
		case -1:
		{
			printf("smaller than base number\n");
			break;
		}
	}
	*/
	return 0;
}