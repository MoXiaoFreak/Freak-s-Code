#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define GUESSTIMESLIMIT 8
int main()
{
	int random, i = 1;
	while(i = 1)
	{
		srand(time(0));
		random = rand() % 101;
		int input, count = 1;
		printf("*************Freak's Guessing Game*************\n");
		printf("There is a real random number.Please input a 0-100 number(an integer) to guess it:\n");
		scanf("%d", &input);
		for (;input != random;)
		{
			if (input > random)
				printf("Too big,try another:\n");
			else if (input < random)
				printf("Too small,try another:\n");
			scanf("%d", &input);
			count++;
			if (count == GUESSTIMESLIMIT)
			{
				printf("Bad\n");
				break;
			}
			if (input == random)
			{
				printf("Good\n");
				break;
			}
		}
		printf("type 1 to begin the next round, type 0 to end the game.\n");
		scanf("%d",&i);
	}
	printf(" Game Over. \n");
	return 0;
}