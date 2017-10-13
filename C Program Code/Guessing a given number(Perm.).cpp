#include <stdio.h>
int main()
{
	int givennumber = 5,input;
	printf("There is a random(HA?) number.Please input a number(an integer) to guess it:\n");
	scanf("%d",&input);
	while (input != givennumber)
	{
		if (input > givennumber)
			printf("Too big,try another:\n");
		else if (input < givennumber)
			printf("Too small,try another:\n");
		scanf("%d", &input);
	}
	if (input == givennumber)
		printf("Congratulations!\n");
	return 0;
}