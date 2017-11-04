#include <stdio.h>
int main()
{
	int i,count=0;
	char Formula[7];
	int Integer[4];//     a  /  b  +  c  /  d
	scanf("%s",&Formula);
	while (Formula != "EOF")
	{
		while(Formula[2] =='0' || Formula[6] == '0'|| Formula[1]!='/'|| Formula[5] != '/'|| (Formula[3] != '+'&&Formula[3] != '-'))
		{
			printf("Invalid input,please input again\n");
			scanf("%s", &Formula);
		}
		Integer[0] = int(Formula[0])-48;
		Integer[1] = int(Formula[2])-48;
		Integer[2] = int(Formula[4])-48;
		Integer[3] = int(Formula[6])-48;
		if ((Formula[0] == 0 && Formula[4] == 0) || (Formula[0] == Formula[4] && Formula[2] == Formula[6]))
		{
			printf("0");
		}
		else if (Formula[3] == '+')
		{
			printf("%d/%d",  Integer[0] * Integer[3] + Integer[2] * Integer[1],Integer[1] * Integer[3]);
		}
		else if (Formula[3] == '-')
		{
			printf("%d/%d",  Integer[0] * Integer[3] - Integer[2] * Integer[1],Integer[1] * Integer[3]);
		}
		scanf("%s", &Formula);
		count++;
	}
	return 0;
}